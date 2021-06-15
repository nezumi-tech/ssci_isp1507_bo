# ssci_isp1507_bo
スイッチサイエンスにて販売されている、「ISP1507ピッチ変換基板（Bluefruitファームウェア書き込み済）」を「Arduino Core for Adafruit Bluefruit nRF52 Boards」で使う際、I2CやSPIが直接使えない問題があります。

この問題を解決するため、ISP1507ピッチ変換基板に合わせ、ピンの割当を変更しました。

# Requirements
* Arduino Core for Adafruit Bluefruit nRF52 Boards

https://github.com/adafruit/Adafruit_nRF52_Arduino

# How to use
* boards+.txtの内容をboards.txtに追加する。
* /variants 内に/ssci_isp1507_bo をフォルダごと追加する。

# Pin mapping
![Pin Mapping](https://github.com/nezumi-tech/ssci_isp1507_bo/blob/main/readme-images/pinmap.png)
