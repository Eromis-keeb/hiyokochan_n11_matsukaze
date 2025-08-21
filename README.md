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

基板裏面の赤枠の部分にはんだ付けしていきます。
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
予備はんだをこて先で溶かし部品をスライドさせれば上手く付けられると思います。<br/>
スライドさせたら、はんだごてを離し１−２秒ほど部品をそのまま保持すると上手く行きます。<br/>
はんだごてより先に保持した部品を動かさないように気をつけましょう。
![IMG_6981](https://github.com/user-attachments/assets/d2698fca-a977-4286-a89b-c182623f999f)
<br/>
<br/>

片側がきっちり固定できたら反対側もはんだ付けしていきます。<br/>
![IMG_6982](https://github.com/user-attachments/assets/d3e959c9-2cfd-42b4-ada5-93a7c82b3fff)

<br/>
<br/>
<br/>

#### 2.LED本体を取り付け
<br/>
<br/>
基板裏面のLED1-LED14の部分にLED本体をはんだ付けしていきます。<br/>
![IMG_6983](https://github.com/user-attachments/assets/e447aa3a-a482-4606-a861-a980309064ea)
<br/>
![IMG_6984](https://github.com/user-attachments/assets/27408b47-d366-4360-96f3-8c9b466eaaaf)
<br/>
<br/>
<br/>

![IMG_6985](https://github.com/user-attachments/assets/fb3317a1-f6a9-45b3-9ced-8fe0db84e212)
![IMG_6986](https://github.com/user-attachments/assets/cfc7f62b-657e-446c-8aac-ce780027e952)
![IMG_6987](https://github.com/user-attachments/assets/92e451f6-9ef9-4ca4-97b9-82680681c663)
![IMG_6988](https://github.com/user-attachments/assets/8cbd83dc-d4f7-4b57-ae28-24f5f5b7a637)
![IMG_6989](https://github.com/user-attachments/assets/4b3bf301-e07d-4d0d-8c74-0dbf4d4809e7)
