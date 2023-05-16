# goni

![goni](https://i.imgur.com/eKg5Vrt.jpg)

5x2 keys macro pad.

Keyboard Maintainer: [Takuya Urakawa (dm9records.com 5z6p.com)](https://github.com/hsgw)  
Hardware Supported: STM32F042K6  
Hardware Availability: TODO

Make example for this keyboard (after setting up your build environment):

    make goni:default

## Update firmware
### Enter bootloader
1. Push and hold reset button
2. Push boot button
3. Release reset button
4. Release boot button

### Burn Bootloader with dfu-util

    make goni:default:dfu-util
    
### build ardux firmware (artsey)
1. clone hsgw/qmk-ardux
2. checkout `5z6p` branch
3. setup and run docker (vscode dev container recommend)
4. go to `qmk_firmware/users/ardux`
5. run 
```
rm -rf ../../.build/* && qmk -v compile \
    -e ARDUX_SIZE=std \
    -e ARDUX_HAND=left \
    layout/dm9records_goni.json
```


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
