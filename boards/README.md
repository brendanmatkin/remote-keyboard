# Waveshare ESP32S3 Zero

- `"-DARDUINO_WAVESHARE_ESP32S3_ZERO"` -> arduino cli name
- `"-DARDUINO_USB_MODE=0"` ->
- `"-DARDUINO_USB_CDC_ON_BOOT=1"`
- `"-DARDUINO_RUNNING_CORE=1"`
- `"-DARDUINO_EVENT_RUNNING_CORE=1"`
- `"-DBOARD_HAS_PSRAM"`

| Build Flag                        | Meaning                 |
| --------------------------------- | ----------------------- |
| `DARDUINO_WAVESHARE_ESP32S3_ZERO` | Name for Arduino CLI    |
| `DARDUINO_USB_MODE`               | 0=USB-OTG (TinyUSB), 1=Hardware CDC & JTAG |
| `DARDUINO_USB_CDC_ON_BOOT`        | 1=enabled, 0=disabled   |
| `DARDUINO_RUNNING_CORE`           | 0=core 0, 1=core 1      |
| `DARDUINO_EVENT_RUNNING_CORE`     | 0=core 0, 1=core 1      |
| `BOARD_HAS_PSRAM`                 | 1=has PSRAM, 0=no PSRAM |

`use_1200bps_touch` means that tool will pulse serial port at 1200bps, then watch. Helps to auto-select port. Requires `wait_for_upload_port` to be true, and `require_upload_port` to be true.

# Reference

- [Waveshare ESP32S3 Zero](https://www.waveshare.com/product/esp32-s3-zero.htm)
- [Waveshare ESP32S3 Zero Wiki](https://www.waveshare.com/wiki/ESP32-S3-Zero)
- [ESP32-S3 Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32-s3_datasheet_en.pdf)
- [ESP32-S3 Technical Reference Manual](https://www.espressif.com/sites/default/files/documentation/esp32-s3_technical_reference_manual_en.pdf)
- [Arduino def for waveshare zero](https://github.com/espressif/arduino-esp32/commit/dbdb40280a5ace9ffd27f1567e446c2356ce91c9#diff-c3a7c63d53cdec402cf559c1707ce5ef639a7e59e575f41ac5c8f5941e806a9f)
- [PIO esp32](https://docs.platformio.org/en/latest/platforms/espressif32.html)
- [PIO qtpy ESP32S3 board ref (4M Flash/2M PSRAM)](https://github.com/platformio/platform-espressif32/blob/master/boards/adafruit_qtpy_esp32s3_n4r2.json) (see this to do tinyuf2 - I think it does auto reboot better)
- [PIO qtpy ESP32S3](https://docs.platformio.org/en/latest/boards/espressif32/adafruit_qtpy_esp32s3_n4r2.html)
- [PIO esp32s3 otg ref](https://github.com/platformio/platform-espressif32/blob/master/boards/esp32s3usbotg.json)
- [ESP32 Partition Tables (pio)](https://docs.platformio.org/en/latest/platforms/espressif32.html#partition-tables)
- [ESP32 Partition Tables (espressif)](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/partition-tables.html)
- [esp32-arduino pio build](https://github.com/espressif/arduino-esp32/blob/master/tools/pioarduino-build.py)
