<p align="center"> <img width="500" src="resources/alvr_combined_logo_hq.png"/> </p>

# ALVR - Air Light VR

[![badge-discord][]][link-discord] [![badge-matrix][]][link-matrix] [![badge-opencollective][]][link-opencollective]

Stream VR games from your PC to your headset via Wi-Fi.  
This is a fork of [ALVR](https://github.com/polygraphene/ALVR).

### Direct download the lastest version:
### [Windows Launcher](https://github.com/alvr-org/ALVR/releases/latest/download/alvr_launcher_windows.zip) | [Linux Launcher](https://github.com/alvr-org/ALVR/releases/latest/download/alvr_launcher_linux.tar.gz)

## Compatibility

|      VR Headset       |                                           Support                                            |
| :-------------------: | :------------------------------------------------------------------------------------------: |
|    Quest 1/2/3/Pro    |     :heavy_check_mark: ([store link](https://www.meta.com/experiences/7674846229245715))     |
|     Pico 4/Neo 3      |                                      :heavy_check_mark:                                      |
| Vive Focus 3/XR Elite |                                      :heavy_check_mark:                                      |
|        YVR 1/2        |                                      :heavy_check_mark:                                      |
|        Lynx R1        |                                      :heavy_check_mark:                                      |
|   Apple Vision Pro    |       :heavy_check_mark: ([store link](https://apps.apple.com/app/alvr/id6479728026))        |
| PhoneVR (smartphone)  | :heavy_check_mark: * (Check [PhoneVR](https://github.com/PhoneVR-Developers/PhoneVR) Client) |
|    Android/Monado     |                                         :warning: *                                          |
|        GearVR         |                                    :construction: (maybe)                                    |
|       Oculus Go       |                                            :x: **                                            |

\* : Only works on some smartphones, not enough testing.  
\** : Oculus Go support was dropped, the minimum supported OS is Android 8. Download the last compatible version [here](https://github.com/alvr-org/ALVR/releases/tag/v18.2.3).

|     PC OS      |        Support        |
| :------------: | :-------------------: |
| Windows 10/11  |  :heavy_check_mark:   |
| Windows XP/7/8 |          :x:          |
|     Linux      | :heavy_check_mark:*** |
|     macOS      |          :x:          |

\*** : Please check the wiki for compatibility info

### Requirements

-   A supported standalone VR headset (see compatibility table above)

-   SteamVR

-   High-end gaming PC
    -   See OS compatibility table above.
    -   NVIDIA GPU that supports NVENC (1000 GTX Series or higher) (or with an AMD GPU that supports AMF VCE) with the latest driver.
    -   Laptops with an onboard (Intel HD, AMD iGPU) and an additional dedicated GPU (NVidia GTX/RTX, AMD HD/R5/R7): you should assign the dedicated GPU or "high performance graphics adapter" to the applications ALVR, SteamVR for best performance and compatibility. (NVidia: Nvidia control panel->3d settings->application settings; AMD: similiar way)

-   802.11ac 5Ghz wireless or ethernet wired connection  
    -   It is recommended to use 802.11ac 5Ghz for the headset and ethernet for PC  
    -   You need to connect both the PC and the headset to same router (or use a routed connection as described [here](https://github.com/alvr-org/ALVR/wiki/ALVR-v14-and-Above))

## Install

Follow the installation guide [here](https://github.com/alvr-org/ALVR/wiki/Installation-guide).

## Troubleshooting

-   Please check the [Troubleshooting](https://github.com/alvr-org/ALVR/wiki/Troubleshooting) page, and also [Linux Troubleshooting](https://github.com/alvr-org/ALVR/wiki/Linux-Troubleshooting) if applicable.
-   Configuration recommendations and information may be found [here](https://github.com/alvr-org/ALVR/wiki/Information-and-Recommendations)

## Uninstall

Open `ALVR Dashboard.exe`, go to `Installation` tab then press `Remove firewall rules`. Close ALVR window and delete the ALVR folder.

## Build from source

You can follow the guide [here](https://github.com/alvr-org/ALVR/wiki/Building-From-Source).

## License

ALVR is licensed under the [MIT License](LICENSE).

## Privacy policy

ALVR apps do not directly collect any kind of data.

## Donate

If you want to support this project you can make a donation to our [Open Source Collective account](https://opencollective.com/alvr).

[badge-discord]: https://img.shields.io/discord/720612397580025886?style=for-the-badge&logo=discord&color=5865F2 "Join us on Discord"
[link-discord]: https://discord.gg/ALVR
[badge-matrix]: https://img.shields.io/static/v1?label=chat&message=%23alvr&style=for-the-badge&logo=matrix&color=blueviolet "Join us on Matrix"
[link-matrix]: https://matrix.to/#/#alvr:ckie.dev?via=ckie.dev
[badge-opencollective]: https://img.shields.io/opencollective/all/alvr?style=for-the-badge&logo=opencollective&color=79a3e6 "Donate"
[link-opencollective]: https://opencollective.com/alvr
