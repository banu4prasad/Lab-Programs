import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class Program9 extends JFrame{
    static JTextField textField1, textField2, textField3;
    static JFrame frame;
    public static void main(String[] args) {
        // Set up the frame 
        JFrame frame = new JFrame("Button and TextBox Example");
        frame.setSize(400, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //frame.setLocationRelativeTo(null);
        // Create components
        textField1 = new JTextField(10);
        textField2 = new JTextField(10);
        textField3 = new JTextField(10);
        JButton calculateButton = new JButton("Calculate");
        // Set up the layout
        frame.setLayout(new FlowLayout());
        frame.add(new JLabel("Number 1: "));
        frame.add(textField1);
        frame.add(new JLabel("Number 2: "));
        frame.add(textField2);
        frame.add(new JLabel("Number 3: "));
        frame.add(textField3);
        frame.add(calculateButton);
        frame.setVisible(true);
        // Add action listener to the button
        calculateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                calculateAndShowResults();
            }
        });
    }
    private static void calculateAndShowResults() {
        try {
            // Parse input values
            double num1 = Double.parseDouble(textField1.getText());
            double num2 = Double.parseDouble(textField2.getText());
            double num3 = Double.parseDouble(textField3.getText());
            // Calculate sum, average, and largest
            double sum = num1 + num2 + num3;
            double average = sum / 3;
            double largest = Math.max(Math.max(num1, num2), num3);
            // Display results in a dialog box
            String message = "Sum: " + sum + "\nAverage: " + average + "\nLargest: " + largest;
            JOptionPane.showMessageDialog(frame,message, "Results", JOptionPane.INFORMATION_MESSAGE);
        } catch (NumberFormatException ex) {
            // Handle invalid input
            JOptionPane.showMessageDialog(frame,"Invalid input. Please enter valid floating-point numbers.",
                    "Error", JOptionPane.ERROR_MESSAGE);
        }
    }
}