# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


#def print_hi(name):
    # Use a breakpoint in the code line below to debug your script.
    #print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.


# Press the green button in the gutter to run the script.
#if __name__ == '__main__':
    #print_hi('PyCharm')

# See PyCharm help at https://www.jetbrains.com/help/pycharm/

#print(*"Linux", sep=".")Ekran çıktısı: L.i.n.u.x
#print etmek istediğiniz değeri "deger.print" yazarak print komutunu yazmış olursunuz.

"""Kaçış Dizileri"""

#\’ Karakter dizisi içinde tek tırnak isaretini kullanabilmemizi saglar.
#\” Karakter dizisi içinde çift tırnak isaretini kullanabilmemizi saglar.
#\\ Karakter dizisi içinde \ isaretini kullanabilmemizi saglar.
#\n Yeni bir satıra geçmemizi saglar.
#\t Karakterler arasında sekme boslugu bırakmamızı saglar.
#\u UNICODE kod konumlarını gösterebilmemizi saglar.
#\U UNICODE kod konumlarını gösterebilmemizi saglar.
#\N Karakterleri UNICODE adlarına göre kullanabilmemizi saglar.
#\x Onaltılı sistemdeki bir sayının karakter karsılıgını gösterebilmemizi saglar.
#\a Destekleyen sistemlerde, kasa hoparlöründen bir ‘bip’ sesi verilmesini saglar.
#\r Aynı satırın basına dönülmesini saglar.
#\v Destekleyen sistemlerde düsey sekme olusturulmasını saglar.
#\b Imlecin sola dogru kaydırılmasını saglar
#\f Yeni bir sayfaya geçilmesini saglar."""

#Ters Taksim(\):
#print içerisinde tırnak karışıklığını önler.
#print('Kayseri\'nin bitki örtüsü bozkırdır.')

#Sep Komutu:
#print("Ad:", "Soyad:", "Cep Telefonu:", "Yaşadığı Şehir:", sep="\n")

#Sekme(\t):
#print("Furkan\tASLAN")

#Example 1
#Kullanıcının hangi ay faturasına ne kadar geldiğini gösteren kodu yazınız.

"""ocak = mart = mayıs = temmuz = ağustos = ekim = aralık = 31
nisan = haziran = eylül = kasım = 30
şubat = 28
birimFiyat = 1.578388

ay = input("Görmek istediğiniz ayı giriniz (Küçük harflerle):")

aylik_kullanim = float(input("Aylık doğalgaz metreküp kullanımınızı giriniz: "))
#Eval fonkisyonu yazılan değişkene ait değeri çağırır.
aylik = eval(ay)
gunluk_kullanim = aylik_kullanim / aylik

fatura = gunluk_kullanim * birimFiyat * aylik

kdv = fatura + (fatura * 0.18)
print("Ödenecek tutar: {}" .format(kdv), "TL'dir.")"""

#Example 2

"""kullanici_ad = input("Kullanıcı Adı: ")
password = input("Şifre: ")

uzunluk = len(kullanici_ad) + len(password)
if uzunluk >= 41:
    print("Kullanıcı adınız veya şifreniz 40 karakteri geçmemelidir!")
else:
    print("Giriş işleminiz başarıyla gerçekleşmiştir!")"""""""""

#Example 3

"""isim = input("İsim: ")
soyisim = input("Soyisim: ")

nots = int(input("Notunuzu giriniz: "))

if nots <=49:
    print("Barajı geçemediniz!")
elif nots >=50:
    print("Tebrikler! Barajı geçtiniz!")"""

#Example 4

"""isim = input("İsim: ")
soyisim = input("Soyisim: ")

not_1 = int(input("1. notu giriniz: "))
not_2 = int(input("2. notu giriniz: "))

ort = (not_1 + not_2)/2

if 0<=ort and ort<=24:
    print("5'lik sistemde notunuz: 0")
elif 25<=ort and ort<=44:
    print("5'lik sistemde notunuz: 1")
elif 45<=ort and ort<=54:
    print("5'lik sistemde notunuz: 2")
elif 55<=ort and ort<=69:
    print("5'lik sistemde notunuz: 3")
elif 70<=ort and ort<=84:
    print("5'lik sistemde notunuz: 4")
elif 85<=ort and ort<=100:
    print("5'lik sistemde notunuz: 5")"""

#Example 5

"""sayi = int(input("1 ile 7 arasında bir sayı giriniz:"))

if sayi == 1:
    print("Seçtiğiniz sayı Pazartesi'dir.")
elif sayi == 2:
    print("Seçtiğiniz sayı Salı'dır.")
elif sayi == 3:
    print("Seçtiğiniz sayı Çarşamba'dır.")
elif sayi == 4:
    print("Seçtiğiniz sayı Perşembe'dir.")
elif sayi == 5:
    print("Seçtiğiniz sayı Cuma'dır.")
elif sayi == 6:
    print("Seçtiğiniz sayı Cumartesi'dir.")
elif sayi == 7:
    print("Seçtiğiniz sayı Pazar'dır.")
else:
    print("Geçerli bir değer giriniz!")"""

#Example 6

"""isim = input("Öğrencinin adı: ")
soyisim = input("Öğrencinin soyadı: ")
not_1 = int(input("Öğrencinin 1. notu: "))
not_2 = int(input("Öğrencinin 2. notu: "))

ort = (not_1 + not_2)/2
if ort<=49:
    print("Kaldınız!")
elif ort>=50:
    print("Geçtiniz!")"""

#Example 7


#Example 8

"""sayi = int(input("Sayı giriniz: "))

if sayi<0:
    print("Negatif sayı girdiniz!")
elif sayi == 0:
    print("Girdiğiniz değer 0(sıfır)'dır!")
elif sayi>0:
    print("Pozitif değer girdiniz!")"""

#Example 9

"""yas = int(input("Yaşınızı giriniz: "))

if yas >= 0 and yas < 18:
    print("Demek sen de kanı hızlı akanlardansın :)... Malesef ehliyetini alman için ", (18-yas), "yıl beklemen gerekecek.")
elif yas >= 18:
    print("Hadi yine iyisin ehliyet yaşın gelmiş, gönül rahatlığıyla ehliyet alabilirsin.")
else:
    print("Geçerli bir değer giriniz!")"""


