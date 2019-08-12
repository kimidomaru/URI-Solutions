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
        Scanner sc = new Scanner(System.in);
		double a,b;
		a=sc.nextDouble();
		b=sc.nextDouble();
		double media=(a*3.5+b*7.5)/11;
		System.out.printf("MEDIA = %.5f\n",media);
		sc.close();
    }
 
}