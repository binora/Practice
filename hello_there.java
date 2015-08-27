import javax.swing.JOptionPane;
public class hello_there {

    public static void main(String[] args)
{
        String fno = JOptionPane.showInputDialog("What is your name?");

        JOptionPane.showMessageDialog(null, "helllo :" + fno,"welcome",JOptionPane.PLAIN_MESSAGE);
    }

}

