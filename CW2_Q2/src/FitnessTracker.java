


public class FitnessTracker {

    private String name;
    private int age;
    private String gender;
    
    int totalStep = 0;
    String Activity;
    




    public void setName(String newName){
        this.name = newName;
    }
    public String getName(){
        return name;
    }
    public void setAge(int newAge){
        this.age = newAge;
    }
    public int getAge(){
        return age;
    }
    public void setGender(String newGender){
        this.gender = newGender;
    }
    public String getGender(){
        return gender;
    }
    public void setTotal(int newTotal){
        this.totalStep = newTotal;
        
    }
    public int getTotal(){
        return totalStep;
    }

    public String activityLevel(){
        if(totalStep > 50000){
            Activity = "Highly Active";
        }
        else if(totalStep >= 20000 && totalStep <= 50000){
            Activity = "Moderately Active";
        }
        else if(totalStep < 20000){
            Activity = "Low Activity";
        }
        return Activity;
    }
}
