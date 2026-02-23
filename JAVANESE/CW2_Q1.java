
import java.util.Scanner;



public class CW2_Q1{
    public static void main(String[] args) {
        
        String Public_type;
        char answer;
        int Journal_Article = 8000;
        int projectPaper_Thesis = 600;      //initialisation
        int conferencePaper = 4000;
        double discount = 0.0;
        double subtotal = 0.0;
        int Answer = 0;
        double finalTotal = 0.0;
        int unit;
       

        
        Scanner sc = new Scanner(System.in);
        

        do{ //start of the loop

            
            System.out.println("PUBLICATION TYPE       | PRICE(RM)");
            System.out.println("-----------------------|---------------");
            System.out.println("JOURNAL ARTICLE        | 8000");
            System.out.println("PROJECT PAPER / THESIS | 600");                 //menu
            System.out.println("CONFRENCE PAPER        | 4000");
            System.out.println("-----------------------|---------------");

        
            System.out.println("What Publication Type Would You Like? ");   //getting the answer from user
            System.out.println("TYPE OUT YOUR PUBLICATION TYPE");
        Public_type = sc.nextLine().toUpperCase();

        if ("JOURNAL ARTICLE".equals(Public_type)){     //calculation for journal
            System.out.println("HOW MANY ITEMS WOULD YOU LIKE: ");      
            unit = sc.nextInt();
            Answer += unit;
            
            subtotal += Journal_Article * unit;
        }
        else if("PROJECT PAPER".equals(Public_type) || "THESIS".equals(Public_type)){   //calculation for Project paper & Thesis
             System.out.println("HOW MANY ITEMS WOULD YOU LIKE: ");
            unit = sc.nextInt();
             Answer += unit;
            subtotal += projectPaper_Thesis * unit;
        }
        else if("CONFERENCE PAPER".equals(Public_type)){        ////calculation for Conference paper
             System.out.println("HOW MANY ITEMS WOULD YOU LIKE: ");
             unit = sc.nextInt();
             Answer += unit;
            subtotal += conferencePaper * unit;
        }   

        System.out.println("Would you like to Add anything else?"); //asking if the user wants to add anything else
        answer = sc.next().toLowerCase().charAt(0);

        if(sc.hasNextLine()){
                sc.nextLine();
            }

        }while(answer != 'n');  //ending of the loop
        

        if(Answer >= 3 && Answer <= 5){
            discount = subtotal * 0.05;     //discount calculations based on amount of items
        }
        else if(Answer > 5){
            discount = subtotal * 0.1;
        }
        finalTotal = subtotal - discount;   //calculate final price
        

        System.out.println("Subtotal: " + subtotal);
        System.out.println("Discount: " + discount);        //printing out amounts
        System.out.println("Total: " + finalTotal);
        
    sc.close();
    }
}