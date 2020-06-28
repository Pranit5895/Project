import java.util.*;
import java.text.DecimalFormat;

public class CurrencyConverter {

	public static void main(String[] args) {

		double amount, dollar, pound, code, euro, yen, ringgit, rupee;

		DecimalFormat f = new DecimalFormat("##.##");

		Scanner sc = new Scanner(System.in);

		System.out.println("hi, Welcome to the Currency Converter!");

		System.out.println("which currency You want to Convert ? ");

		System.out.println("1:Ruppe \t2:Dollar \t3:Pound \n4:Euro \t5:Yen \t6:Ringgit ");
		code = sc.nextInt();

		System.out.println("How much Money you want to convert ?");
		amount = sc.nextFloat();

		// For amounts Conversion
		if (code == 1) {

			dollar = amount / 70;
			System.out.println("Your " + amount + " Rupee is : " + f.format(dollar) + " Dollar");

			pound = amount / 88;
			System.out.println("Your " + amount + " Rupee is : " + f.format(pound) + " Pound");

			euro = amount / 80;
			System.out.println("Your " + amount + " Rupee is : " + f.format(euro) + " Euro");

			yen = amount / 0.63;
			System.out.println("Your " + amount + " Rupee is : " + f.format(yen) + " Yen");

			ringgit = amount / 16;
			System.out.println("Your " + amount + " Rupee is : " + f.format(ringgit) + " ringgit");
		}

