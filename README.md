# ssci_isp1507_bo
スイッチサイエンスにて販売されている、「ISP1507ピッチ変換基板（Bluefruitファームウェア書き込み済）」を「Arduino Core for Adafruit Bluefruit nRF52 Boards」で使う際、I2CやSPIが直接使えない問題があります。  
この問題を解決するため、ISP1507ピッチ変換基板に合わせ、ピンの割当を変更しました。

# Requirements
* Arduino Core for Adafruit Bluefruit nRF52 Boards  
https://github.com/adafruit/Adafruit_nRF52_Arduino

# How to use
## JP
Arduino IDEを起動し`ファイル > 環境設定 > 追加のボードマネージャURL:`に次のURLを追記してください。
```
https://raw.githubusercontent.com/nezumi-tech/ssci_isp1507_bo/main/package_nezumi_tech_ISP1507.json
```
`nRF52 Boards`は`Adafruit`のサポートファイルを参照する為、下記URLも`追加のボードマネージャURL`に追記してください。
```
https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
```

## EN
 1. [Download and install the Arduino IDE](https://www.arduino.cc/en/Main/Software)
 2. Start the Arduino IDE
 3. Go into Preferences
 4. Add
    ```
    https://raw.githubusercontent.com/nezumi-tech/ssci_isp1507_bo/main/package_nezumi_tech_ISP1507.json
    https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
    ```
    as an 'Additional Board Manager URL'
 6. Restart the Arduino IDE
 7. Open the Boards Manager from the Tools -> Board menu and install 'Switch Science ISP1507 Breakout nezumi_tech mod'
 8. Once the BSP is installed, select 'Switch Science ISP1507 Breakout nezumi_tech mod -> Switch Science ISP1507 Breakout' from the Tools -> Board menu, which will update your system config to use the right compiler and settings for the nRF52.


# Pin mapping
![Pin Mapping](https://github.com/nezumi-tech/ssci_isp1507_bo/blob/main/readme-images/pinmap.png)
