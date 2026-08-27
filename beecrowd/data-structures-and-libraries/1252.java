import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++){
            int n=sc.nextInt(),m=sc.nextInt();
            int[] vet=new int[n];
            for(int i=0;i<n;i++){
                vet[i]=sc.nextInt();
            }
            for(int i=0;i<n-1;i++){
                int smallest=i;
                for(int j=i+1;j<n;j++){
                    if(vet[j]%m<vet[smallest]%m){
                        
                    }
                }
            }
        }
 
    }
 
}
