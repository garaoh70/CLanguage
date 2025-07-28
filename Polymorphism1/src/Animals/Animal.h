#ifndef __POLYMORPHISM1_ANIMALS_ANIMAL__
#define __POLYMORPHISM1_ANIMALS_ANIMAL__

typedef struct Animal
{
    const char* (*name)();
    const char* (*speak)();
} Animal;

#if 0

cat
        ニャーニャー
いぬ
dog
        ワンワン
うし
cow
モーモー
ぶた
pig
ブーブー
うま
horse
ヒヒーン
やぎ
goat
メーメー
ひつじ
sheep
メーメー
たぬき
raccoon dog
ポンポコ
きつね
fox
コンコン
さる
monkey
キャッキャ
しか
deer
ピーッ
いのしし
wild boar
グフッ
くま
bear
グルル
ねずみ
mouse
チューチュー
もぐら
mole
キュキュ
こうもり
bat
キィキィ
ハムスター
hamster
キュッキュッ
フェレット
ferret
クククッ
あらいぐま
raccoon
クルル
うさぎ
rabbit
キュー
ラット
rat
キッキッ
モルモット
guinea pig
キュイキュイ
テン
marten
シャーッ
ハリネズミ
hedgehog
シュッシュッ
カワウソ
otter
キューキュー
リス
squirrel
チッチッチ
アライグマ
raccoon
ウーウー

#endif

#endif