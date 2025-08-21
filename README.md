![IMG_7039](https://github.com/user-attachments/assets/f73fa648-31b9-47ec-b195-29c7eed49437)
# 松風 / hiyokochan_n11 ビルドガイド
hiyokochan_n11/松風は以下の特徴を備えるマクロパッドです。
- テンキー配列の11キー
- 3つのロータリーエンコーダー（プッシュボタン付き）
- ３つのトグルスイッチによる機能変更（レイヤー変更）
- 現在の機能把握に便利なLEDインジケーター
- 交換可能な和柄プレート（松風のみ）  

ファームウェアはVial対応です。  

vialのソフトウェアから自由にキーマップを変更可能です。




## 必要な物

### キット付属のもの

部品|個数
--|--
hiyokochan_n11/松風 基板|x1
トッププレート（アクリル）|x1
ミドルプレート上|x1
ミドルプレート下|x1
ボトムプレート（アクリル）|x1

### 各自用意するもの
部品|個数
--|--
RP2040-ZERO|x1
MX用スイッチソケット|x11
SK6812MINI-E |x14
Millmax |x15
高さ2.0mmコンスルー(12ピン分) |x2
SMDダイオード |x14
EC12互換ロータリーエンコーダ(プッシュスイッチ付き)※遊舎工房さんの高さ17.5mmの物を想定 |x3
チップ抵抗 2012 1KΩ |x2
MOSFET 50V300mA BSS138 |x1
トグルスイッチ|x3
MXキースイッチ |x11
MXキーキャップ |x11
ロータリーエンコーダーノブ（直径17mmくらいまで）|x3

部品はTALPキーボードさん、遊舎工房さん、秋月電子通商さん、マルツオンラインさんで調達しています。<br/>
<br/>
<br/>
## 組み立て
基板部分は松風として解説していきます。hiyokochan_n11は基板共用なので全く同じです。
![IMG_6974](https://github.com/user-attachments/assets/49af0c97-d4c3-4640-bef5-6b61a42c7d46)

LED→SMDダイオード→スイッチソケットの順ではんだ付けします。<br/>
<br/>
<br/>
<br/>
### LEDの取り付け
レベルシフト回路にチップ抵抗とMOSFETをはんだ付け→LEDのはんだ付けの準で処理していきます。
#### 1.チップ抵抗、MOSFETの取り付け
![IMG_6975](https://github.com/user-attachments/assets/915f73e8-3a22-4d67-ae6d-2d71322a0dd8)
<br/>
<br/>
<br/>

このチップ抵抗と
![IMG_6976](https://github.com/user-attachments/assets/cf97941b-9ee8-4c10-bf84-435638d50abd)
<br/>
<br/>
このMOSFETを基板にはんだ付けしていきます。
![IMG_6977](https://github.com/user-attachments/assets/cacae60c-cd6c-48a1-9984-fdc310d2eeee)
<br/>
<br/>
<br/>

赤枠の部分にはんだ付けしていきます。
![IMG_6978](https://github.com/user-attachments/assets/d46dc75a-036a-4bf0-bdeb-e56670230e30)
![IMG_6978](https://github.com/user-attachments/assets/904d63b0-3a59-4903-be75-18168b018219)
<br/>
<br/>

フラックスを流布してから青枠のように片側に予備はんだをしていきます。
はんだごてにごく少量はんだを乗せてからパッドにこて先をあて、こて先を少し立てるようにするとはんだが流れて乗りやすくなると思います。
![IMG_6980](https://github.com/user-attachments/assets/36eca67b-2711-4263-83fb-180ad9495646)
<br/>
<br/>

チップ抵抗、MOSFETを設置場所の少し横に置き、ピンセットなどで保持してスッと横にスライドできる状態にしておいてから、
予備はんだをこて先で溶かし部品をスライドさせれば上手く付けられると思います。
スライドさせたら、はんだごてを離し１−２秒ほど部品をそのまま保持すると上手く行きます。
はんだごてより先に保持した部品を動かさないように気をつけましょう。
![IMG_6981](https://github.com/user-attachments/assets/d2698fca-a977-4286-a89b-c182623f999f)
<br/>
<br/>

![IMG_6982](https://github.com/user-attachments/assets/d3e959c9-2cfd-42b4-ada5-93a7c82b3fff)
