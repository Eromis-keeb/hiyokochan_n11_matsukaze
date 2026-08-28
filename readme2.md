






# 松風,夕顔,若紫 共通 ケース・組込みビルドガイド
松風は以下の特徴を備えるマクロパッドです。
- テンキー配列の11キー
- 3つのロータリーエンコーダー（プッシュボタン付き）
- 3つのトグルスイッチによる機能変更（レイヤー変更）
- 現在の機能把握に便利なLEDインジケーター
- 持ち運びに便利な取っ手付きケース”東屋”付き（おまけ）
- 自由に柄など（0.5mm以下の紙など）をあしらえるカスタムプレート（夕顔、松風、若紫のみ）
- ※作例では千代切り紙（バックストリートファクトリー製）を使用した例です。キットには同梱されません。  

ファームウェアはQMK/Vial対応です。  

vialのソフトウェアから自由にキーマップを変更可能です。 <br/>



## 組み立てにあたって

<img width="1024" height="768" alt="5E71160D-2920-4F10-9ACA-105B6139C252_1_105_c" src="https://github.com/user-attachments/assets/0c5dab31-8806-4757-b30f-486f515857ba" />
<br/>
本キットには基板完成済みの通常版と基板の組み立てが必要なチャレンジキットがあります。<br/>
→チャレンジキットのビルドガイドはこちら<br/>
https://github.com/Eromis-keeb/hiyokochan_n11_matsukaze/blob/169a056d2d58242f48d707c86a4b9f6e3e6f920c/README.md <br/>
通常版の場合も最初から最後まで読むことである程度仕組みが解るので読んで頂いたほうが良いと思います。<br/>
カスタムプレートを使用する場合もチャレンジキット用のビルドガイドの最後にカスタムガイドがあります。<br/>
<br/>
※このビルドガイドでは若紫基板を使って説明しています。<br/>
写真がわかりにくい場合はチャレンジキットのビルドガイドでは松風基板を使って説明しているので,そちらの”８.ケースの組み立て”を参照するのが良いでしょう。。<br/>


## 必要な物

### キット付属のもの

部品|個数
--|--
松風 基板(完成)|x1
トッププレート（アクリル）|x1
ミドルプレート上|x1
ミドルプレート下|x1
カスタムミドルプレート上|x1
カスタムミドルプレート下|x1
ボトムプレート（アクリル）|x1
インジケーターバー（レジン）|x1
スペーサー（9mm）|x6
トップ用ネジ（5mm）|x6
ボトム用ネジ（8mm）|x6
脚用ネオジムマグネット(穴あき)|x4
脚用マグネットカバー|x4
取っ手付きケース|x1
ケース用ネオジムマグネット|x4
ケース用マグネットカバー|x4


### 各自用意するもの
部品|個数
--|--
MXキースイッチ |x11
MXキーキャップ |x11
ロータリーエンコーダーノブ（直径17mmくらいまで）|x3



部品はTALPKEYBOARDさん、遊舎工房さん、秋月電子通商さん、マルツオンラインさんで調達しています。<br/>
<br/>
<br/>
## 組み立て
基板部分は若紫基板を使用して解説していきますが、どのモデルでも内容は同じなので適宜読み替えてください。hiyokochanシリーズとは基板共用なので全く同じです。<br/>
ところどころ別基板の写真が使われいる箇所がありますが、こちらも適宜読み替えて眼の前の基板と照らし合わせて組み立てを行ってください。<br/>

<br/>

### 1.ボトムプレートの組み立て
#### 1-1.脚の組み立て<br/>
<br/>
ボトムプレートを組み立てていきます。<br/>
<br/>

<img width="1024" height="768" alt="3B385812-37E2-4249-B79A-B397F9491C2E_1_105_c" src="https://github.com/user-attachments/assets/353951be-cd65-4993-b83c-48145d3f97c3" /> <br/>
<br/>
<br/>

まず初めにマグネット脚を組み立てます。<br/>
<img width="1024" height="768" alt="BAB4D48F-6B53-43CD-A5A4-15063EB05923_1_105_c" src="https://github.com/user-attachments/assets/04ffae0a-1a61-4eda-823b-e327d368c84b" /> <br/>
ネオジムマグネット（穴あき）４つ、マグネット脚用カバー４つ、ボトム用ネジ（８mm）４つ用意します。<br/>
<br/>
<br/>

マグネット脚用カバーの表裏を確認します。<br/>
<img width="4032" height="3024" alt="3D85E10E-7033-4DA5-844B-C60AE2930741_1_201_a" src="https://github.com/user-attachments/assets/5bbe2c71-aa01-46a5-9705-5eb852528da1" /> <br/>
でこぼこした面が底面、若干穴が広くなっている方が上面です。<br/>
<br/>
<br/>

ネオジムマグネット（穴あき）をカバーに嵌め込みます。<br/>
<img width="3024" height="4032" alt="7386E9FB-65FB-4E94-9F0C-DC86050F54E5_1_201_a" src="https://github.com/user-attachments/assets/12fde933-7fd9-48ba-992e-bc86391891bb" /> <br/>
上面（穴の広い方）を上に穴あきマグネットの窪んでいる方が上になるように嵌め込みます。<br>
<br/>
<br/>

持ち上げた時にマグネットが落下しないのが正解の向きです。<br/>
<img width="768" height="1024" alt="89FED13F-75E0-4C19-8C53-208BA437D89F_1_105_c" src="https://github.com/user-attachments/assets/63d47d40-c4c0-43c9-8848-d719e3885b3a" /> <br/>
<br/>
<br/>

カバーに嵌め込んだマグネット脚にネジを入れます。<br/>
<img width="768" height="1024" alt="1E1E7649-2C07-46B9-9E78-ABA967FD5426_1_105_c" src="https://github.com/user-attachments/assets/f0f2959b-1438-411e-9f47-ddf04c2cad5e" /> <br/>
<br/>
<br/>

<img width="3024" height="4032" alt="1E1E7649-2C07-46B9-9E78-ABA967FD5426_1_201_a" src="https://github.com/user-attachments/assets/67a77d89-b6a7-4ed2-907b-5e2d0e8b20aa" /> <br/>
<br/>
<br/>

マグネットの窪みにネジ頭がはまるように差し込みます。<br/>
<img width="768" height="1024" alt="22C73C22-2449-4EC3-9B27-5FEA223553B6_1_105_c" src="https://github.com/user-attachments/assets/0c04971e-b00a-4a38-a797-aad67548f0a9" /> <br/>
持ち上げた際にネジが落下しなければ正解の向きです。<br/>
<br/>
<br/>

同様に残り３つを作成します。<br/>
<img width="1024" height="768" alt="7019172F-A643-4C4D-9239-FC0337A2584E_1_105_c" src="https://github.com/user-attachments/assets/cdf6bb52-05e5-4771-b01e-3125df0587c0" /> <br/>
マグネット脚のできあがり。<br/>
<br/>
<br/>

#### 1-2.スペーサー取り付け<br/>
<br/>

<img width="1024" height="768" alt="354A4D05-CDDB-4463-B3B3-B86F9B601560_1_105_c" src="https://github.com/user-attachments/assets/44908989-16b5-4e3b-becb-fef16dad86a5" /> <br/>
ボトムプレートと１−１で作成したマグネット脚を用意します。<br/>
<br/>
<br/>

ボトムプレートのシートを剥がします。<br/>
<img width="4032" height="3024" alt="B7173BBF-B541-4CDE-928F-803535075C77_1_201_a" src="https://github.com/user-attachments/assets/fbd69656-92b2-49e0-b0b3-2522296bb691" /> <br/>
裏表があるので気をつけてください。切り欠きが左側に来る状態が正しい向きです。<br/>
<br/>
<br/>

６箇所にスペーサーを取り付けていきます。<br/>
<img width="4032" height="3024" alt="06A1CAE0-88FF-4FC0-A884-6E38A3CE27E6_1_201_a" src="https://github.com/user-attachments/assets/952a828e-1677-4766-b8f5-746c1f144c82" /> <br/>
青枠部分の６箇所にスペーサーをネジで取り付けます。<br/>
ボトム用ネジ（8mm）を２本用意します。 <br/>
<br/>
<br/>

中央の２箇所にスペーサーを取り付けます。<br/>
<img width="4032" height="3024" alt="8A3CE902-C2DF-4C0B-9669-FC1B9F5914F4_1_201_a" src="https://github.com/user-attachments/assets/2bdb6795-25c9-448c-96d6-c83a75b8a407" /> <br/>
ボトムプレートの切り欠きが左側に来る状態で表が上面、逆側が底面です。<br/>
<br/>
<br/>

上面側にスペーサー、底面側からネジを差し込みます。<br/>
<img width="3024" height="4032" alt="73D179DD-903A-45F3-9622-4AB4DF6DA667_1_201_a" src="https://github.com/user-attachments/assets/fd69f4e4-6a0d-499a-8f7e-024bbc2786bc" /> <br/>
<br/>
<img width="768" height="1024" alt="A90B3763-A033-40C1-B452-C1A9FFA496CD_1_105_c" src="https://github.com/user-attachments/assets/9a87e66a-9697-4e07-94cb-d3c4db4b1ee8" /> <br/>
裏面側からドライバーでネジ止めします。しっかり締めてください。<br/>
<br/>
<br/>

スペーサーを取り付けた所 <br/>
<img width="768" height="1024" alt="A3B33F6C-48F6-4448-9350-AA5F5ACF295B_1_105_c" src="https://github.com/user-attachments/assets/67c84eb1-ed15-4b77-a7e1-ab70589e4c4e" /> <br/>
同じように中央下側にもスペーサーを取り付けます。<br/>
<br/>
<br/>

１−１で作成したマグネット脚を同じ要領で四隅に取り付けます。<br/>
<img width="4032" height="3024" alt="EB479EC1-0327-469C-B976-D223C7D51619_1_201_a" src="https://github.com/user-attachments/assets/428c91da-891b-464b-8c44-a6953195c951" /> <br/>
裏表を間違えないように気をつけましょう。 <br/>
<br/>
<br/>


<img width="768" height="1024" alt="11F68660-5C6A-451B-9645-E2E7F07E6B88_1_105_c" src="https://github.com/user-attachments/assets/764f96f7-0917-48d6-914f-b040d91bc28a" /> <br/>
<br/>
<br/>

取り付け完了状態（上面） <br/>
<img width="3024" height="4032" alt="F68B0DB4-A6A4-4C87-B431-0A353CD92024_1_201_a" src="https://github.com/user-attachments/assets/fb58c93f-dda7-4226-b0ef-500fe9196612" /> <br/>
<br/>
<br/>

取り付け完了状態（底面） <br/>
<img width="3024" height="4032" alt="F91956F6-4891-46D9-A6E8-1D585448960E_1_201_a" src="https://github.com/user-attachments/assets/1cea6db0-23e9-46aa-b5fc-30ddb5c18472" /> <br/>
これでボトムプレートは完成です。<br/>
<br/>
<br/>






### 2.基板の組み付け
#### ２-1.ミドルプレート下の取り付け<br/>
<br/>

1ー2までに作ったボトムプレートにミドルプレートを組み付けていきます。<br/>

<img width="2048" height="1536" alt="246A76F5-9BA0-49F6-8D1D-285436BE7330_1_102_a" src="https://github.com/user-attachments/assets/c97b9561-edc4-4124-9e09-965e56ea6ece" /> <br/>
ミドルプレート下を用意します。<br/>
このとき必要であればカスタムプレートなどを使用することもできます。<br/>
<br/>
<br/>

ミドルプレートをボトムプレートに乗せてスペーサーを差し込む形で組み付けます。 <br/>
隙間がないように差し込んでください。 <br/>
![IMG_7154](https://github.com/user-attachments/assets/aa1b5fc9-c2e2-4aa2-a70f-e9af4f91dc79)<br/>
<br/>
<br/>

※上記の差し込みを行う際、固くて差し込みにくい場合は無理せず以下の写真のように
ミドルプレートの各スペーサ穴をボトムプレートを使って予め差し込みやすくしてから
全体を差し込むとすんなり入ると思います。<br/>
無理に強行するとアクリルが割れます。<br/>
注意して差し込んでください。 <br/>
![IMG_7155](https://github.com/user-attachments/assets/d451e68c-95c6-4c60-9c7d-0b79141ccdcf) <br/>
<br/>
<br/>

ミドルプレート下の取り付け完了 <br/>
<img width="1536" height="2048" alt="FAA70F5D-7E77-4AFA-B7F0-BDB86CA2BF31_1_102_o" src="https://github.com/user-attachments/assets/fe1a3544-e399-4f29-86d0-5afbabd0e212" />
 <br/>
<br/>
<br/>

#### ２-2.基板の取り付け<br/>
<br/>
次に基板を取り付けていきます。 <br/>
<img width="2048" height="1536" alt="B90FAE65-A210-4A2E-8C25-29711DE36ECD_1_102_a" src="https://github.com/user-attachments/assets/8a8fd073-1291-446f-9f1d-f8df24998e50" /> <br/>
基板をミドルプレートの上に乗せます。　<br/>
 <br/>
向きが間違っていなければすんなり嵌るはずです。<br/>
カポッと軽く嵌まらなければ組み付けの向きが間違っている可能性があります。無理やりやらずに戻って確認してください。<br/>
<br/>
<br/>

基板の取り付け完了<br/>
<img width="768" height="1024" alt="428AEAC9-AFEE-4A4A-BBAE-1C7C93EC4CC0_1_105_c" src="https://github.com/user-attachments/assets/7ce5f6ab-c013-4782-93e5-018227ebc539" /> <br/>
<br/>
<br/>

#### ２-3.ミドルプレート上の取り付け<br/>
<br/>
次にミドルプレート上を取り付けます。 <br/>
<img width="1024" height="768" alt="C4C1BBCA-E06A-4CC3-8A23-4ED69EC36C55_1_105_c" src="https://github.com/user-attachments/assets/872390b0-6c0b-4314-8e46-92af54281ee6" /> <br/>
<br/>
<br/>

ミドルプレート上にインジケーターバーパーツを取り付けます。<br/>
<img width="3024" height="4032" alt="B6B88341-4A60-4F40-BCDE-0DD99C9A1979_1_201_a" src="https://github.com/user-attachments/assets/27acf7cd-e01d-4427-a29b-8e9b1eb6d0cd" /> <br/>
ミドルプレート上を裏返します。<br/>
写真のように緑枠内の部分にインジケーターバーパーツを嵌め込みます。 <br/>
嵌まりにくい場合は少し強めに力を入れると嵌まります。<br/>
逆に緩い場合はスリットにかからないようにマスキングテープなどで補強して留めてください。 <br/>
<br/>
<br/>

インジケーターバー取り付け完了。 <br/>
<img width="3024" height="4032" alt="E6C1EC1D-FC48-492A-9375-8FF296193F0D_1_201_a" src="https://github.com/user-attachments/assets/68b1f75b-d092-4b85-97e5-7f70ca76412a" /> <br/>
<br/>
<br/>

２ー２までに作ったものの上にミドルプレート上を乗せてスペーサーを差し込む形で取り付けます。<br/>
<img width="1024" height="768" alt="D2835753-5F46-49E6-8FE1-87E89F99CB23_1_105_c" src="https://github.com/user-attachments/assets/862c9a16-ec63-44dd-98f8-3f25c6a3c386" /> <br/>
<br/>
ミドルプレート下のときと同様に差し込み辛い場合はあらかじめ一つづつスペーサーをプレートに通してからやるとスムーズに組み付けできます。 <br/>
<br/>
<br/>

ミドルプレート上組み付け完了。<br/>
<img width="768" height="1024" alt="32672529-891F-4E06-B2EB-0978CAA6CCAC_1_105_c" src="https://github.com/user-attachments/assets/25cf81be-a818-4005-8620-919220979c9a" />
<br/>
<br/>
<br/>


### 3.トッププレートの取り付け
2-3までに作った本体にトッププレートを取り付けていきます。<br/>
<br/>
<img width="1024" height="768" alt="D8B075B2-7F6E-4410-8957-8BB22002E233_1_105_c" src="https://github.com/user-attachments/assets/7506e21a-8298-4466-9fb8-628911f60cc6" /> <br/>
トップ用ネジ（5mm）を６本用意します。<br/>
トッププレートのフィルムを剥がします。<br/>
<br/>
<br/>

裏表に注意してトッププレートを本体に乗せます。<br/>
<img width="2048" height="1536" alt="FD9CE0C1-4C16-4254-8732-E7C5B0A6548C_1_102_a" src="https://github.com/user-attachments/assets/f891e001-3021-4d59-bc60-a830212fd17e" /> <br/>
※裏表が違うとネジ穴が合いません。<br/>
<br/>
<br/>

トッププレートを載せたらネジ止めしていきます。<br/>
<img width="1536" height="2048" alt="041B6606-ECDC-4DAE-82CE-486E19F0D8FD_1_102_o" src="https://github.com/user-attachments/assets/7fd3e048-00e4-423c-b913-fef830061e8b" /> <br/>
<br/>
<br/>

スペーサーの穴が見えている部分にネジ止めします。<br/>
<img width="1536" height="2048" alt="B5203D46-066C-4D48-838D-3EE3D3E1372E_1_102_o" src="https://github.com/user-attachments/assets/cb7ed8fd-65e3-45ff-97f6-2e979f6af188" /> <br/>
青枠内の６箇所に5mmネジで止めます。<br/>
最初は軽く締めて対角を少しずつ絞めるのがポイントです。<br/>
<br/>
<br/>

これで本体は完成です！<br/>
<img width="1536" height="2048" alt="34A73274-9958-4450-9146-035ABDB1AAC4_1_102_o" src="https://github.com/user-attachments/assets/2449a2a1-752e-4088-9343-eef9176fa4dd" /> <br/>
<br/>
<br/>


### 4.仕上げ
仕上げは好きなキースイッチやキーキャップを付けて使えるようにしていきます。<br/>
<br/>

<img width="768" height="1024" alt="4ABEA8D3-D12D-487E-83DD-62AB7FAC8BA8_1_105_c" src="https://github.com/user-attachments/assets/60d685e7-58c0-4c60-8ff6-bdd2687e076b" /> <br/>
<br/>
<br/>

キースイッチを付けます。<br/>
<img width="768" height="1024" alt="2E28995F-BBE6-456D-83DE-04B62DA539C6_1_105_c" src="https://github.com/user-attachments/assets/ba5b681c-5fd6-497e-8c6d-447db5fa36f6" /> <br/>
キースイッチによっては嵌め込みが硬い場合もあります。<br/>
多くはそれほど力をかけずとも付くはずなので、無理に力を入れすぎてピンを折ったり曲げたりしないように注意してください。<br/>
万一、曲がってしまった場合はラジオペンチなどで挟んでまっすぐ矯正すれば再び使えることが殆どです。<br/>
また特定のキーだけ反応しない場合はピン曲りが濃厚なので、故障を疑う前にキースイッチを外して曲りがないか確認しましょう。<br/>
<br/>
<br/>

キースイッチが付いたらキーキャップを取り付けます。<br/>
<img width="768" height="1024" alt="9D435325-2163-40D6-9ADD-80D30E544996_1_105_c" src="https://github.com/user-attachments/assets/78eef0c9-9f59-4085-8a33-2dff70bfe6c4" /> <br/>
<br/>

お好みのデザイン、カラーのキーキャップを取り付けることでいろいろな見た目を楽しめます。<br/>
<img width="768" height="1024" alt="2566B36B-CC7B-4F48-9C30-3C5D00551BCD_1_105_c" src="https://github.com/user-attachments/assets/439b71fa-962a-4cbc-b543-69fca6e8f9cf" /> <br/>
自作キーボードのカスタマイズの肝の部分ですね。<br/>
<br/>
<br/>

最後にロータリーエンコーダーノブを取り付けて完成！<br/>
<img width="768" height="1024" alt="0CDAD361-1CCC-4EC1-B44F-A45255D15710_1_105_c" src="https://github.com/user-attachments/assets/f0bb8e99-21f5-4ad1-a014-c286bb35c9f1" /> <br/>
付属の標準ノブでも良いですし様々な作家さんの作るアルチザンエンコーダーノブもオススメです。<br/>
ビルドガイド上は直径17mmくらいまでとなってますが、作者の確認する限りでは22mm位までは一応付きます。（使いやすいかどうかは別）<br/>

<br/>

お疲れ様でした！以上でマクロパッドは完成です。<br/>
PCに繋ぎ動作確認を取ってください。<br/>
予めファームウェアは書き込んであるので動作はしますが、<br/>
キーマップを弄ったりする場合は、Vialソフトウェアが必要です。<br/>
自分好みに動作させるにはほぼ必須なので是非インストールして使ってください。<br/>
詳しくはマクロパッド用のHOW to Guidを書いているのでそちらを参照のこと。<br/>
→こちら<br/>
https://note.com/eromis_sumomorry/n/nddd1c667d807?sub_rt=share_pw <br/>
<br/>
<br/>

続いてはおまけの取っ手付きケースの組み立てガイドです。<br/>
なくても使用は可能ですが作者おすすめですのでぜひ作ってみて頂きたいと思います。<br/>

### ５.取っ手付きケースの組み立て

キットによってはすでに完成、または途中まで組み上げた状態でお届けすることがあります。<br/>
<br/>
組み立てに必要な部品<br/>
<img width="768" height="1024" alt="683BAB69-4B69-401F-957C-C650F8DC28EC_1_105_c" src="https://github.com/user-attachments/assets/d8011766-69c8-4733-a5ac-a9cdfd4440aa" /> <br/>
ボルトx２、座金x２、ケース本体、取っ手<br/>
<br/>
<br/>

ボルトに座金を通します。<br/>
<img width="768" height="1024" alt="3E29E969-A738-4E65-8C36-CCBD802A715C_1_105_c" src="https://github.com/user-attachments/assets/e3100f42-4ddd-42f2-b240-28488bfded91" /> <br/>
<br/>

矢印で示すように通します。<br/>
<img width="3024" height="4032" alt="6C9B0F94-0E76-4FC8-A0D6-9E1964FBD7D3_1_201_a" src="https://github.com/user-attachments/assets/bfe9f813-4462-4e52-89bc-f8a530dc2673" /> <br/>
向きは特にありません。<br/>
<br/>
<br/>

座金を通した所<br/>
<img width="768" height="1024" alt="F5B135D7-1848-42C6-A521-CBB9A14ED6C2_1_105_c" src="https://github.com/user-attachments/assets/ff2fb0b4-3a08-4413-a72a-5435092244db" /> <br/>
<br/>
<br/>

座金が落下しないようにボルトの頭を下にして置いておきます。<br/>
<img width="768" height="1024" alt="BFF9B41A-E880-4579-9699-A5601D2CA592_1_105_c" src="https://github.com/user-attachments/assets/dbb5d09a-3417-4517-8a73-77959e63e7f1" /> <br/>
<br/>
<br/>

ケースに座金を付けたボルトを通します。<br/>
<img width="768" height="1024" alt="0F23D987-27D6-4CF7-B76B-7BB45066C634_1_105_c" src="https://github.com/user-attachments/assets/91c783bd-f200-4f9b-b908-5ec8f941367b" /> <br/>
この時ドライバーなどを使うとすんなり通せます。<br/>
<br/>
<br/>

取っ手の穴をあてがい軽く締めます。<br/>
<img width="1024" height="768" alt="F0097ABC-4AE7-4CA0-8C44-9EA5B1B6DA6A_1_105_c" src="https://github.com/user-attachments/assets/e2629868-1241-4851-89dc-2ce1cfdec77f" /> <br/>
この時締めすぎると逆側が付けられなくる事があるのでこの時点では軽めに。<br/>
<br/>
<br/>

同じ要領で逆側も締めます。<br/>
<img width="1024" height="768" alt="6F01E6BC-A76A-4B40-AD7F-A4C7E4046E7D_1_105_c" src="https://github.com/user-attachments/assets/7dbc9b6e-4460-4fe3-bf74-f267a76cb358" /> <br/>
ある程度締まったら逆側も本締めしてしっかりととめます。<br/>
<br/>
<br/>

続いて本体を固定する為のマグネットを仕込みます。<br/>
<img width="1024" height="768" alt="4742A94B-E805-4EB8-BEED-45CAD7CA7B76_1_105_c" src="https://github.com/user-attachments/assets/e4bcc37a-7c48-489b-bcf2-6f007e0f1583" /> <br/>
マグネットx４、マグネット用カバーx４ <br/>
<br/>
<br/>

部品を確認します。 <br/>
<img width="768" height="1024" alt="EB563F61-4AA8-4945-8166-E5D48FD74A3A_1_105_c" src="https://github.com/user-attachments/assets/b4b106e7-6d39-424c-9e61-97ed3cde968c" /> <br/>
<br/>
<br/>

マグネットを本体の脚四隅に付けて磁石の方向を確認しておきます。<br/>
<img width="768" height="1024" alt="38216007-8874-4CCF-8BA5-531B6C57F532_1_105_c" src="https://github.com/user-attachments/assets/056792b1-96e3-4e86-9971-3ecc8fe924f5" /> <br/>
<br/>
<br/>

続いて仕込むマグネットを組み立てます。<br/>
<img width="768" height="1024" alt="77F8F4A6-6B89-4384-8BB4-382652BEE8F5_1_105_c" src="https://github.com/user-attachments/assets/1f59c564-896c-4906-901a-a7e94cc59110" /> <br/>
<br/>
<br/>

マグネット用カバーには裏表があります。<br/>
<img width="3024" height="4032" alt="4C198406-0768-4872-A0AD-979D34A8BE7A_1_201_a" src="https://github.com/user-attachments/assets/9bbec060-4a3d-413c-837b-a1afb80a25d5" />　<br/>
赤枠の開口部が狭い方が上面<br/>
青枠の開口部が広い方が底面です。<br/>
<br/>
<br/>

下の写真のように被せます。<br/>
<img width="3024" height="4032" alt="1BA53109-AF34-4991-B36C-4C0B1D9CF3A7_1_201_a" src="https://github.com/user-attachments/assets/e31aa218-892e-4a9f-b183-1d9c7ef31306" />　<br/>
向きを慎重に確認しながら緑矢印のように上から被せます。<br/>
<br/>
<br/>

同じ容量で４つ作ります。<br/>
<img width="768" height="1024" alt="4C71880A-A9B3-4632-9D88-69D521B701AA_1_105_c" src="https://github.com/user-attachments/assets/cb042b56-3789-400c-97b5-bcfd0a10d8e9" />　<br/>
<br/>
<br/>

一度本体にくっ付けて確認します。<br/>
<img width="768" height="1024" alt="DD2A5C4E-6B5F-447F-AD61-6A59267ACE48_1_105_c" src="https://github.com/user-attachments/assets/f77997a1-75e2-4443-b577-3b936e274e85" /> <br/>
本体を普通に置く形で水平にしてもマグネットカバーが落下しないのが正しい向きです。<br/>
<br/>
<br/>

本体を横に裏返して置き、マグネットの対応位置を確認します。<br/>
<img width="1024" height="768" alt="D83EEA92-2E2D-487D-A82C-A35B4DA3A3F2_1_105_c" src="https://github.com/user-attachments/assets/bd53c980-b96e-489a-b931-00b9420238b4" /> <br/>
<br/>
<br/>

確認できたらマグネットを埋め込んでいきます。<br/>
<img width="4032" height="3024" alt="3518ABA6-44DD-4891-B2CF-8A50363D1AC5_1_201_a" src="https://github.com/user-attachments/assets/9186c37d-91a4-4492-a342-7b7be79caa4c" /> <br/>
<br/>
<br/>

対応する位置にマグネットを置き、<br/>
<img width="1024" height="768" alt="0F9AFC79-7620-44A5-9418-BA1297D6AD4C_1_105_c" src="https://github.com/user-attachments/assets/a20cf953-c508-44d3-a257-29a3605075e1" /> <br/>
裏表注意してください。間違えて押し込むと中々取れなくなります。<br/>
<br/>
<br/>
押し込みツールを使って垂直に押し込みます。<br/>
<img width="1024" height="768" alt="59E2EBBB-5CEF-4588-B09C-591574C6B355_1_105_c" src="https://github.com/user-attachments/assets/2820da2a-bbd6-482c-80e7-0d6bfdb9074f" /> <br/>
<br/>
<br/>
大体平らになっていればOK<br/>
<img width="1024" height="768" alt="62A7B734-01C2-4032-AE4D-C7D204ACF158_1_105_c" src="https://github.com/user-attachments/assets/6aa4a3d3-fc3d-425f-a7e6-ee43966e4274" /> <br/>
<br/>
<br/>

残りの３箇所も同じ要領で押し込んでいきます。<br/>
<img width="1024" height="768" alt="72008648-EDAC-40B1-ABA9-C4CA549E0FFC_1_105_c" src="https://github.com/user-attachments/assets/0b2ea7aa-50a7-4155-936d-828974bcd12e" /> <br/>
<br/>
<br/>

完成。<br/>
<img width="768" height="1024" alt="B589EEE2-BA69-412A-8CC6-A1690D003813_1_105_c" src="https://github.com/user-attachments/assets/d1f12ab4-83dd-4c72-97a2-e85357c0c6d0" /> <br/>
<br/>
<br/>

最後に本体をドッキングさせれば出来上がりです。<br/>
<img width="768" height="1024" alt="F33A2307-53A1-44BE-8FC6-58CA4F093147_1_105_c" src="https://github.com/user-attachments/assets/7c765249-f5da-48c2-8696-d8bcfa5000ef" /> <br/>
尚、取り付ける際は上側から斜めに差し込むようにして下側を倒すように嵌め込むと楽にできます。<br/>
外す時は背面の穴から押し出すようにしてください。<br/>
ある程度しっかりくっ付いていますが逆さにして激しく降ると取れるので、振り回せるほどではありませんので注意。<br/>
<br/>
<br/>















