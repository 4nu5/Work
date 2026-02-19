
import java.util.Scanner;







public class main {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        char Answer;
        String AnswerFlower;
        

        do { 
         System.out.println("WELCOME TO BLOOM BLOOM FLORIST");
        System.out.println("WOULD YOU LIKE CUSTOM OR PRE-PACKAGED FLOWERS");
        AnswerFlower = sc.nextLine().toUpperCase();
        if ("PACKAGE".equals(AnswerFlower)) {
             
        PreMadeFlower flower = new PreMadeFlower();
        double Price = flower.preMadeFlower();
        }
        else if ("CUSTOM".equals(AnswerFlower)) {
            CustomFlower price = new CustomFlower();
            double total = price.customFlower();
        }
        System.out.println("WOULD YOU LIKE TO ADD MORE ITEMS?");
        Answer = sc.nextLine().toUpperCase().charAt(0);

        } while (Answer != 'N');
        
        Delivery delivery = new Delivery();
        double finalCharge = delivery.getDelivery(0.0);

        
    }
}
