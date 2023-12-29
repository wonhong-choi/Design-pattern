import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class SwingExample {
    JFrame jframe;

    public void go(){
        jframe = new JFrame();
        JButton button = new JButton();
        button.addActionListener(new AngleListener());
        button.addActionListener(new DevilListener());

        jframe.add(button);
        jframe.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        jframe.setPreferredSize(new Dimension(400, 200));
        jframe.pack();
        jframe.setVisible(true);
    }

    public class AngleListener implements ActionListener{
        @Override
        public void actionPerformed(ActionEvent e) {
            System.out.println("GO GO GO !");
        }
    }

    public class DevilListener implements ActionListener{
        @Override
        public void actionPerformed(ActionEvent e) {
            System.out.println("STOP STOP STOP !");
        }
    }

    public static void main(String[] args) {
        SwingExample se = new SwingExample();
        se.go();
    }
}
