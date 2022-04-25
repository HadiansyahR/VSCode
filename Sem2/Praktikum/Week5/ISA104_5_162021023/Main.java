package Sem2.Praktikum.Week5.ISA104_5_162021023;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int n;
        int[] a;
        int i;

        System.out.print("Masukkan Panjang Array : ");
        n = scan.nextInt();
        a = new int[n];
        
        System.out.println();
        System.out.println("Masukkan Elemen Array : ");
        for (i = 0; i < n; i++) {
            System.out.printf("a[%d] = ", i);
            a[i] = scan.nextInt();
            scan.close();
        }
        
        System.out.println();
        System.out.println("Hasil Input : ");
        for (i = 0; i < n; i++) {
            System.out.printf("a[%d] = ", i);
            System.out.println(a[i]);
        }

    }
}