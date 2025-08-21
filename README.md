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

部品はTALPKEYBOARDさん、遊舎工房さん、秋月電子通商さん、マルツオンラインさんで調達しています。<br/>
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

![IMG_6985](https://github.com/user-attachments/assets/fb3317a1-f6a9-45b3-9ced-8fe0db84e212)
<br/>
<br/>
赤枠部分Gndの表記の部分にこれまでの要領と同じに予備はんだをしていきます。
![IMG_6986](https://github.com/user-attachments/assets/cfc7f62b-657e-446c-8aac-ce780027e952)
<br/>
<br/>
LED本体オレンジ枠のように切り欠きの部分と予備はんだをしたGndの部分を合わせるようにLEDを設置します。
![IMG_6987](https://github.com/user-attachments/assets/92e451f6-9ef9-4ca4-97b9-82680681c663)
<br/>
<br/>
設置をするとこのようになります。
![IMG_6988](https://github.com/user-attachments/assets/8cbd83dc-d4f7-4b57-ae28-24f5f5b7a637)
<br/>
<br/>
ピンセットなどでLED本体をしっかり固定し、はんだごてで予備はんだを溶かしてはんだ付けします。<br/>
しっかり固定していればはんだが溶けると自然と水平になるので、まっすぐになっていることを確認したらはんだごてを離します。<br/>
この際もLED本体は固定したままにし、はんだごてを離して1−2秒してから固定を解除するようにするとうまく行きます。<br/>
水平になっていなかったりズレたまま固定してしまった場合は、慌てず少し間を置いてから再度ピンセットなどでしっかりと固定した状態ではんだを温め直して修正してください。<br/>
<br/>
<br/>

同じ要領で全てのLEDのGnd部とLED本体の切り欠き部をはんだ付けしていきます。
![IMG_6989](https://github.com/user-attachments/assets/4b3bf301-e07d-4d0d-8c74-0dbf4d4809e7)
<br/>
<br/>

続けてDIｎ、DOut、VCCというように順番にはんだ付けしていきます。
はんだごてにはんだを乗せてからパッドに当てピンの根本から滑らすようにすると綺麗にできると思います。
長い間当てすぎないようにしましょう。1−2秒は大丈夫な気がします。
![IMG_6991](https://github.com/user-attachments/assets/de56f8a9-e921-4349-b2f1-1f280d11ef41)

<br/>
<br/>

#### 3.SMDダイオードの取り付け
<br/>
<br/>
SMDダイオードをはんだ付けしていきます。<br/>

SMDダイオードには図の赤枠内のように縦線が入っています。

![406658558-03dcead0-b42c-49c8-963d-3cf0ec3464ec](https://github.com/user-attachments/assets/c20f0e98-ccdc-44d6-b3e5-5fca8e272cee)
<br>
<br>
基板緑枠内にも同じように縦線が入っている場所があります。
![IMG_6993](https://github.com/user-attachments/assets/f7f76421-2a06-4c73-84a7-74037d2cc11e)
<br/>
<br/>
予備はんだをしたら・・
![IMG_6994](https://github.com/user-attachments/assets/5b08fded-789e-4359-ad67-5e2ae09606b3)
<br/>
<br/>
その縦線と、緑枠内の基板上の縦線の向きが合うようにSMDダイオードを配置します。
![IMG_6995](https://github.com/user-attachments/assets/e4df4da0-299c-4268-bf1b-c33f2a7f1948)
<br/>
<br/>
チップ抵抗の時と同じ要領で予備はんだを溶かし、SMDダイオードをスライドさせてはんだ付けします。
![IMG_6996](https://github.com/user-attachments/assets/d39a79d9-5353-4875-be26-26d40d783d92)
<br/>
<br/>
LEDの時と同じ要領で縦線の向きに注意しながら全てのSMDダイオードの片側をはんだ付けしていきます。
![IMG_6997](https://github.com/user-attachments/assets/b4c03a3a-a197-48af-9ec3-1cb1e3cf96f7)
<br/>
<br/>








