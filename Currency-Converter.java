//CODE FOR CURRENCY CONVERTER

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
		}else if (code == 2) {
			// For Dollar Conversion
 
			rupee = amount * 70;
			System.out.println("Your " + amount + " Dollar is : " + f.format(rupee) + " Ruppes");
 
			pound = amount * 0.78;
			System.out.println("Your " + amount + " Dollar is : " + f.format(pound) + " Pound");
 
			euro = amount * 0.87;
			System.out.println("Your " + amount + " Dollar is : " + f.format(euro) + " Euro");
 
			yen = amount * 111.087;
			System.out.println("Your " + amount + " Dollar is : " + f.format(yen) + " Yen");
 
			ringgit = amount * 4.17;
			System.out.println("Your " + amount + " Dollar is : " + f.format(ringgit) + " ringgit");
		}else if (code == 3) {
			// For Pound Conversion
 
			rupee = amount * 88;
			System.out.println("Your " + amount + " pound is : " + f.format(rupee) + " Ruppes");
 
			dollar = amount * 1.26;
			System.out.println("Your " + amount + " pound is : " + f.format(dollar) + " Dollar");
 
			euro = amount * 1.10;
			System.out.println("Your " + amount + " pound is : " + f.format(euro) + " Euro");
 
			yen = amount * 140.93;
			System.out.println("Your " + amount + " pound is : " + f.format(yen) + " Yen");
 
			ringgit = amount * 5.29;
			System.out.println("Your " + amount + " pound is : " + f.format(ringgit) + " ringgit");
		}else if (code == 4) {
			// For Euro Conversion
 
			rupee = amount * 80;
			System.out.println("Your " + amount + " euro is : " + f.format(rupee) + " Ruppes");
 
			dollar = amount * 1.14;
			System.out.println("Your " + amount + " euro is : " + f.format(dollar) + " Dollar");
 
			pound = amount * 0.90;
			System.out.println("Your " + amount + " euro is : " + f.format(pound) + " Pound");
 
			yen = amount * 127.32;
			System.out.println("Your " + amount + " euro is : " + f.format(yen) + " Yen");
 
			ringgit = amount * 4.78;
			System.out.println("Your " + amount + " euro is : " + f.format(ringgit) + " ringgit");
		}else if (code == 5) {
 
			// For Yen Conversion
 
			rupee = amount * 0.63;
			System.out.println("Your " + amount + " yen is : " + f.format(rupee) + " Ruppes");
 
			dollar = amount * 0.008;
			System.out.println("Your " + amount + " yen is : " + f.format(dollar) + " Dollar");
 
			pound = amount * 0.007;
			System.out.println("Your " + amount + " yen is : " + f.format(pound) + " Pound");
 
			euro = amount * 0.007;
			System.out.println("Your " + amount + " yen is : " + f.format(euro) + " Euro");
 
			ringgit = amount * 0.037;
			System.out.println("Your " + amount + " yen is : " + f.format(ringgit) + " ringgit");
		}else if (code == 6) {
			// For Ringgit Conversion
 
			rupee = amount * 16.8;
			System.out.println("Your " + amount + " ringgit is : " + f.format(rupee) + " Ruppes");
 
			dollar = amount * 0.239;
			System.out.println("Your " + amount + " ringgit is : " + f.format(dollar) + " dollar");
 
			pound = amount * 0.188;
			System.out.println("Your " + amount + " ringgit is : " + f.format(pound) + " pound");
 
			euro = amount * 0.209;
			System.out.println("Your " + amount + " ringgit is : " + f.format(euro) + " euro");
 
			yen = amount * 26.63;
			System.out.println("Your " + amount + " ringgit is : " + f.format(yen) + " yen");
		}
		else {
			System.out.println("Invalid input");
		}
		System.out.println("Thank you for choosing our Example Programs");
	}

}

/* SAMPLE OUTPUT 
 * Java
hi, Welcome to the Currency Converter!
which currency You want to Convert ?
1:Ruppe 	2:Dollar 	3:Pound
4:Euro 	5:Yen 	6:Ringgit
2
How much Money you want to convert ?
200
Your 200.0 Dollar is : 14000 Ruppes
Your 200.0 Dollar is : 156 Pound
Your 200.0 Dollar is : 174 Euro
Your 200.0 Dollar is : 22217.4 Yen
Your 200.0 Dollar is : 834 ringgit
Thank you for choosing our Example Programs
*/


