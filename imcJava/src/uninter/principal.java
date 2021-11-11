package uninter;

import java.util.Scanner;

public class principal {

	public static void main(String[] args) {
		System.out.println("Calculadora de IMC");
		System.out.print("Digite sua altura: ");
		Scanner dado_altura = new Scanner(System.in);
		float altura = dado_altura.nextFloat();
		System.out.print("Digite seu peso: ");
		Scanner dado_peso = new Scanner(System.in);
		int peso = dado_peso.nextInt();
		
		float coeficiente = (float) (peso/(Math.pow(altura,2)));//calcula o coeficiente IMC
		//conjunto de condicionantes para análise do valor IMC e sua classificação.
		if (coeficiente < 18.5) {
			System.out.println("");
			System.out.println("Seu IMC é: " + coeficiente +", você está classificada(o) como magreza!");
		}else if (coeficiente < 24.9) {
			System.out.println("");
			System.out.println("Seu IMC é: " + coeficiente + ", você está classificada(o) como normal!");
		}else if (coeficiente < 30) {
			System.out.println("");
			System.out.println("Seu IMC é: " + coeficiente + ", você está classificada(o) como sobrepeso!");
		}else {
			System.out.println("");
			System.out.println("CUIDADO!");
			System.out.println("Seu IMC é: " + coeficiente + ", você está classificada(o) com obesidade!");
		}
		

	}

}
