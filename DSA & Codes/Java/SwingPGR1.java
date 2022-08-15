import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class  SwingPGR1
{
	public static void main(String[] args)
	{
		SwingFrame j1= new SwingFrame();
		j1.setSize(400,400);
		j1.setVisible(true);
		j1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
class SwingFrame extends JFrame implements ActionListener
{
	
	JLabel l1;
	JButton b1;
	int count=0;
	
	SwingFrame()
	{
		super("swing demo");
		setLayout(new FlowLayout());
		l1=new JLabel("Clicked "+ count + "times");	
		b1=new JButton("click");

		add(l1);
		add(b1);

		b1.addActionListener(this);
		getRootPane().setDefaultButton(b1);
	}
	public void actionPerformed(ActionEvent e)
	{

		count++;
		l1.setText(""+count);
	}
}

