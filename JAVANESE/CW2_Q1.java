
import java.util.Scanner;



public class CW2_Q1{
    public static void main(String[] args) {
        
        String Public_type;
        char answer;
        int Journal_Article = 8000;
        int projectPaper_Thesis = 600;
        int conferencePaper = 4000;
        double discount = 0.0;
        double subtotal = 0.0;

        
        Scanner sc = new Scanner(System.in);
        


        System.out.println("PUBLICATION TYPE       | PRICE(RM)");
        System.out.println("-----------------------|---------------");
        System.out.println("JOURNAL ARTICLE        | 8000");
        System.out.println("PROJECT PAPER / THESIS | 600");
        System.out.println("CONFRENCE PAPER        | 4000");

        
       //upperCase = Public_type.toUpperCase();
        //System.out.println("Your publication: " + Public_type);


        do{
            System.out.println("What Publication Type Would You Like? ");
        Public_type = sc.nextLine().toUpperCase();

        if ("JOURNAL ARTICLE".equals(Public_type)){
            System.out.println("test1");
            subtotal += Journal_Article;
        }
        else if("PROJECT PAPER".equals(Public_type) || "THESIS".equals(Public_type)){
            System.out.println("test2");
            subtotal += projectPaper_Thesis;
        }
        else if("CONFERENCE PAPER".equals(Public_type)){
            System.out.println("test3");
            subtotal += conferencePaper;
        }   

        System.out.println("Would you like to Add anything else?");
        answer = sc.nextLine().toLowerCase().charAt(0);


        // if(answer == 'y'){
        //     System.out.println("What Would you Like to Add?");
        //     Public_type = sc.nextLine().toUpperCase();
        // }
        System.out.println("string" + subtotal);
    
    }while(answer == 'y');

    }
    
}