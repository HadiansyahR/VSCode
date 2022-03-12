import random
import datetime
from customer import Customer

atm = Customer(id)

while(True):
    #Input PIN
    id = int(input('Masukkan nomor PIN: '))
    #Percobaan input
    trial = 0

    #Looping verifikasi
    while(id != int(atm.checkPin()) and trial <3):
        id = int(input('PIN anda salah, silahkan masukkan lagi: '))
        trial +=1

        if trial == 3:
            print('PIN anda salah, silahkan ambil kartu dan coba lagi')
            exit()
    
    while(True):
        print('Selamat datang di ATM Lele')
        print('\n 1. Cek Saldo \t 2. Debet \n 3. Deposit \t 4. Ganti PIN \n\t 5. Keluar\n')

        menuSelect = int(input('Silahkan pilih menu: '))

        if menuSelect == 1:
            print('Saldo anda sekarang: Rp. '+str(atm.checkBalance()) +'\n')

        elif menuSelect == 2:
            nominal = float(input('Masukkan nominal debet: '))
            verify = str(input('Konfirmasi: Anda akan melakukan debet sebesar: Rp. '+
            str(nominal)+'\n Y/N: '))
            
            if verify == 'Y' or 'y':
                print('Saldo awal anda adalah: Rp. '+ str(atm.checkBalance()))
            else:
                break;

            if nominal < atm.checkBalance():
                atm.withdrawBalance(nominal)
                print('Saldo anda setelah debet: Rp.'+str(atm.checkBalance()))
            else:
                print('Saldo tidak mencukupi untuk melakukan debet!\n')

        elif menuSelect == 3:
            nominal = float(input('Masukkan nominal deposit: '))
            verify = str(input('Konfirmasi: Anda akan melakukan deposit sebesar: Rp. '+
            str(nominal)+'\n Y/N: '))
            
            if verify == 'Y' or 'y':
                print('Saldo awal anda adalah: Rp. '+ str(atm.checkBalance()))
                atm.depositBalance(nominal)
                print('Saldo anda setelah deposit: Rp.'+str(atm.checkBalance()))
            else:
                break

        elif menuSelect == 4:
            verify_pin = int(input("Masukkan PIN anda: "))
            
            while(verify_pin != atm.checkPin()):
                print('PIN yang Anda masukkan salah, silahkan isi PIN dengan benar')
                verify_pin = int(input("Masukkan PIN anda: "))
            
            new_pin = int(input('Silahkan masukkan PIN baru: '))
            print('PIN anda berhasil diganti')

            verify_newpin = int(input('Silahkan masukkan PIN baru Anda: '))
            if(verify_newpin == new_pin):
                print('Ganti PIN sukses!')
            else:
                print('Maaf, PIN anda salah')

        elif menuSelect == 5:
            print('\nResi tercetak otomatis saat Anda keluar.\nHarap simpan tanda terima ini\n' + 
            'sebagai bukti transaksi Anda.')
            print('No transaksi: '+ str(random.randint(10000, 100000)))
            print('Tanggal: '+ str(datetime.datetime.now()))
            print('Saldo akhir: Rp. '+str(atm.checkBalance()))
            print('Terima kasih telah menggunakan ATM Lele!\n')
            exit()

        else:
            print('Error, maaf menu tidak tersedia')