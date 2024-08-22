#pragma once

#include "ALVR-common/packet_types.h"
#include "TrackedDevice.h"
#include "openvr_driver.h"
#include <map>

class Controller : public TrackedDevice, public vr::ITrackedDeviceServerDriver {
public:
    Controller(uint64_t deviceID, vr::EVRSkeletalTrackingLevel skeletonLevel);

    virtual ~Controller() {};

    //
    // ITrackedDeviceServerDriver
    //

    virtual vr::EVRInitError Activate(vr::TrackedDeviceIndex_t unObjectId);

    virtual void Deactivate();

    virtual void EnterStandby();

    void* GetComponent(const char* pchComponentNameAndVersion);

    virtual void PowerOff() {};

    /** debug request from a client */
    virtual void
    DebugRequest(const char* pchRequest, char* pchResponseBuffer, uint32_t unResponseBufferSize);

    virtual vr::DriverPose_t GetPose();

    vr::VRInputComponentHandle_t getHapticComponent();

    void RegisterButton(uint64_t id);

    void SetButton(uint64_t id, FfiButtonValue value);

    bool onPoseUpdate(
        float predictionS,
        FfiDeviceMotion motion,
        const FfiHandSkeleton* hand,
        unsigned int controllersTracked
    );

    void GetBoneTransform(bool withController, vr::VRBoneTransform_t outBoneTransform[]);

    vr::ETrackedDeviceClass getControllerDeviceClass();

private:
    // https://github.com/ValveSoftware/openvr/wiki/Hand-Skeleton
    enum HandSkeletonBone
    {
        eBone_Root = 0,
        eBone_Wrist,
        eBone_Thumb0,
        eBone_Thumb1,
        eBone_Thumb2,
        eBone_Thumb3,
        eBone_IndexFinger0,
        eBone_IndexFinger1,
        eBone_IndexFinger2,
        eBone_IndexFinger3,
        eBone_IndexFinger4,
        eBone_MiddleFinger0,
        eBone_MiddleFinger1,
        eBone_MiddleFinger2,
        eBone_MiddleFinger3,
        eBone_MiddleFinger4,
        eBone_RingFinger0,
        eBone_RingFinger1,
        eBone_RingFinger2,
        eBone_RingFinger3,
        eBone_RingFinger4,
        eBone_PinkyFinger0,
        eBone_PinkyFinger1,
        eBone_PinkyFinger2,
        eBone_PinkyFinger3,
        eBone_PinkyFinger4,
        eBone_Aux_Thumb,
        eBone_Aux_IndexFinger,
        eBone_Aux_MiddleFinger,
        eBone_Aux_RingFinger,
        eBone_Aux_PinkyFinger,
        eBone_Count
    };

    std::map<uint64_t, vr::VRInputComponentHandle_t> m_buttonHandles;

    vr::VRInputComponentHandle_t m_compHaptic;
    vr::VRInputComponentHandle_t m_compSkeleton = vr::k_ulInvalidInputComponentHandle;
    vr::EVRSkeletalTrackingLevel m_skeletonLevel;

    vr::DriverPose_t m_pose;

    // These variables are used for controller hand animation
    // todo: move to rust
    int m_currentThumbTouch = 0;
    int m_currentRestTouch = 0;
    int m_currentTriggerTouch = 0;
    float m_triggerValue = 0;
    float m_gripValue = 0;

    bool isEnabled() { return m_pose.deviceIsConnected; }
};
