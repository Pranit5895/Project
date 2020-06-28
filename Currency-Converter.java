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

