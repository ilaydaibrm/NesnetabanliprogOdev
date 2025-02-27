

#include <iostream>
#include <string>
using namespace std;

/* Bir program yazınız, kullanıcıdan adını, soyadını, yaşını,
boyunu (float) ve cinsiyetini (char) isteyiniz.
 Ardından bu bilgileri düzenli bir şekilde ekrana yazdırınız.
 */
int main()
{
    string adi, soyadi;
    float yas, boy;    
    char cinsiyet;
    cout << "Adinizi Yazin:";
    cin >> adi;
    cout << "Soyadinizi Yazin:" ;
    cin >> soyadi;
    cout << "Yasinizi Girin:";
    cin >> yas;
    cout << "Boyunuzu Girin:";
    cin >> boy;
    cout << "Cinsiyetinizi Girin (E/K) :";
    cin >> cinsiyet;
    cout << "\"" << adi << "\"\t\"" << soyadi << "\"\t" << yas << "\t" << boy << "\t" << cinsiyet << "\t";
    return 0;

}

/*Bir alışveriş hesaplayıcı programı geliştiriniz.Kullanıcıdan bir ürün adı(string), adedi(int) ve birim fiyatını(float) alınız.
Toplam tutarı hesaplayarak sonuçları düzenli bir şekilde ekrana yazdırınız.Çıktınızda tab(\t) karakteri ile hizalama yapınız,
çift tırnak(") kullanınız ve ters eğik çizgi (\) karakterini gösteriniz.*/


int main()
{
    string urun_adi;
    int  urun_adet,toplam;
    float birim_fiyati;
    cout << "Urun Adini Girin:";
    cin >> urun_adi;
    cout << "Kac Adet Oldugunu Girin:";
    cin >> urun_adet;
    cout << "Birim Fiyatini Girin:";
    cin >> birim_fiyati ;
    toplam = urun_adet*birim_fiyati ;
    cout <<  urun_adi << "\t"  << toplam << "\t";
    return 0;

}

/*
Bir sıcaklık dönüşüm programı yazınız.Kullanıcıdan Celsius cinsinden bir sıcaklık değeri(float) alınız ve bu değeri Fahrenheit birimine dönüştürünüz.
Hesaplama sonucunu tab(\t) karakteri kullanarak düzenli bir şekilde gösteriniz ve çıktınızda yeni satır(\n) karakterini kullanarak okunabilirliği artırınız.
Programınızda formül açıklamasını çift tırnak(") içinde belirtiniz.*/

int main()
{
    float celsius, fahrenheit;
    cout << "Sicaklik Degerini Giriniz:";
    cin >> celsius;
    fahrenheit = celsius * 9 / 5 + 32;
    cout << celsius << "\t" << "Celsius""\n" << fahrenheit <<"\t" << "Fahrenheit'e esittir." << "\n" <<"\"fahrenheit = celsius * 9/5 + 32\"";
    return 0;

}