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
![IMG_6975](https://github.com/user-attachments/assets/915f73e8-3a22-4d67-ae6d-2d71322a0dd8)
![IMG_6976](https://github.com/user-attachments/assets/cf97941b-9ee8-4c10-bf84-435638d50abd)
![IMG_6977](https://github.com/user-attachments/assets/cacae60c-cd6c-48a1-9984-fdc310d2eeee)
![IMG_6978](https://github.com/user-attachments/assets/d46dc75a-036a-4bf0-bdeb-e56670230e30)
![IMG_6978](https://github.com/user-attachments/assets/904d63b0-3a59-4903-be75-18168b018219)
![IMG_6979](https://github.com/user-attachments/assets/71d5ca0b-b2f8-4a67-84cb-e3acfbb11020)
![IMG_6980](https://github.com/user-attachments/assets/36eca67b-2711-4263-83fb-180ad9495646)
![IMG_6981](https://github.com/user-attachments/assets/d2698fca-a977-4286-a89b-c182623f999f)
![IMG_6982](https://github.com/user-attachments/assets/d3e959c9-2cfd-42b4-ada5-93a7c82b3fff)
