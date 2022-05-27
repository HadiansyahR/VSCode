package Sem2.Praktikum.Kuis;

import java.util.Scanner;

class Karyawan{
    private String nama;
    private String ttl;
    private String jabatan;
    private double gaji;
    private double tunjangan;
    private double lembur;
    private double total;

    public void setNama(String nama){
        this.nama = nama;
    }

    public void setTTL(String ttl){
        this.ttl = ttl;
    }

    public void setJabatan(String jabatan){
        this.jabatan = jabatan;
    }

    public void setGaji(double gaji){
        this.gaji = gaji;
    }

    public void setTunjangan(double tunjangan){
        this.tunjangan = tunjangan;
    }

    public void setLembur(double lembur){
        this.lembur = lembur;
    }

    public void setTotal(double total){
        this.total = total;
    }

    public String getNama(){
        return nama;
    }
    
    public String getTTL(){
        return ttl;
    }

    public String getJabatan(){
        return jabatan;
    }

    public double getGaji(){
        return gaji;
    }

    public double getTunjangan(){
        return tunjangan;
    }

    public double getLembur(){
        return lembur;
    }

    public double getTotal(){
        return total;
    }
}

public class nomor3 {
    public static void main(String[] args) {
        String nama;
        String ttl;
        String jabatan;
        double gaji;
        double tunjangan;
        double lembur;
        double total;
        int jamLembur;

        Karyawan obj = new Karyawan();
        Scanner s = new Scanner(System.in);

        System.out.print("Nama: ");
        nama = s.nextLine();

        System.out.print("Tempat, Tanggal Lahir: ");
        ttl = s.nextLine();

        System.out.print("Jabatan: ");
        jabatan = s.nextLine();

        System.out.print("Gaji Pokok: ");
        gaji = s.nextDouble();

        System.out.print("Jam Lembur: ");
        jamLembur = s.nextInt();

        tunjangan = (0.15 * gaji);
        lembur = (25000 * jamLembur);
        total = gaji + tunjangan + lembur;
        s.close();
        
        obj.setNama(nama);
        obj.setTTL(ttl);
        obj.setJabatan(jabatan);
        obj.setGaji(gaji);
        obj.setTunjangan(tunjangan);
        obj.setLembur(lembur);
        obj.setTotal(total);

        System.out.println("\nData Karyawan\nNama: "+obj.getNama());
        System.out.println("TTL: "+obj.getTTL());
        System.out.println("Jabatan: "+obj.getJabatan());
        System.out.println("\nDetail Gaji\nGaji Pokok: Rp."+obj.getGaji());
        System.out.println("Tunjangan: Rp."+obj.getTunjangan());
        System.out.println("Lembur: Rp."+obj.getLembur());
        System.out.println("\nTotal Gaji: Rp."+obj.getTotal());
    }
}