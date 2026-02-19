import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.HashMap;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;




public class Loginpage  implements  ActionListener{
   
    
    JFrame frame = new JFrame();
    JButton loginButton = new JButton("Login");
    JButton resetButton = new JButton("Reset");
    JButton fuckButton = new JButton("Fuck");
    JTextField loginText = new JTextField();
    JPasswordField passText = new JPasswordField();
    JLabel userIDlabel = new JLabel("Login ID");
    JLabel userPasslabel  = new JLabel("Password ID");
    JLabel msglabel = new JLabel("");

    HashMap<String, String> Logininfo = new HashMap<String, String>();
    
    Loginpage(HashMap<String, String> Logininfoori){

        Logininfo = Logininfoori; //just to make it globally used by other methods can use it

        userIDlabel.setBounds(50,100, 75,25);
        userPasslabel.setBounds(50,150, 75,25);

        msglabel.setBounds(125,250, 250, 35);
        msglabel.setFont(new Font(null,Font.ITALIC, 25));

        loginText.setBounds(125, 100, 200, 25);
        passText.setBounds(125, 150, 200, 25);

        loginButton.setBounds(125, 200, 100, 25);
        loginButton.addActionListener(this);
        loginButton.setFocusable(false);
        
        resetButton.setBounds(225,200, 100, 25);
        resetButton.addActionListener(this);
        resetButton.setFocusable(false);
        
        fuckButton.setBounds(325,200, 100, 25);
        fuckButton.addActionListener(this);
        fuckButton.setFocusable(false);

        frame.add(userIDlabel);
        frame.add(userPasslabel);
        frame.add(loginText);
        frame.add(passText);
        frame.add(loginButton);
        frame.add(resetButton);
        frame.add(fuckButton);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setLayout(null);
        frame.setVisible(true);



    }

    @Override
    public void actionPerformed(ActionEvent e) {
        
        if(e.getSource() == resetButton){
            loginText.setText("");
            passText.setText("");
        }
        if(e.getSource() == loginButton){

            String userID = loginText.getText();
            String password = String.valueOf(passText.getPassword());

             if(Logininfo.containsKey(loginText)){
            if(Logininfo.get(loginText).equals(password)){
                 msglabel.setForeground(Color.green);
                msglabel.setText("Login SUCC");
                welcomepage welcomepage = new welcomepage();
            }
            else{
                msglabel.setForeground(Color.red);
                msglabel.setText("USELESS");
            }
           
        }
    }
       
 }
}
