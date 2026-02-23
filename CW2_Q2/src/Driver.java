

import java.util.Scanner;


public class Driver {
    public static void main(String[] args) {
        String name;
        int age;
        String gender;
        int[] stepCount = new int[7];
        int total = 0;
        
        Scanner sc = new Scanner(System.in);

        FitnessTracker t = new FitnessTracker();

        System.out.println("ENTER YOUR NAME: ");
        name = sc.nextLine();
        t.setName(name);
        
        System.out.println("ENTER YOUR GENDER: ");
        gender = sc.nextLine();
        t.setGender(gender);

        System.out.println("ENTER YOUR AGE: ");
        age = sc.nextInt();
        t.setAge(age);

        System.out.println("Name: " + t.getName());
        System.out.println("Age: " + t.getAge());
        System.out.println("Gender: " + t.getGender());

        for(int i = 0; i < stepCount.length; i++){
            System.out.println("ENTER YOUR STEP RANNGE: " + (i+1));
             stepCount[i] = sc.nextInt();
             total += stepCount[i];

                t.setTotal(total);
             }
        

        
        System.out.println("YOUR TOTAL STEPS FOR THE WEEK: " + total);
        System.out.println("YOUR ACTIVITY LEVEL FOR THE WEEK: " + t.activityLevel());

        sc.close();
    }
}


