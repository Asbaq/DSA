import java.awt.*;
import java.awt.event.*;
class myFrame3 extends Frame implements ActionListener
{


	Button b1,b2,b3;
	myFrame3()
	{
		this.setLayout(null);
		 b1=new Button("red");
		 b2=new Button("blue");
		 b3=new Button("green");

		 b1.setBounds(50,50,70,40);
		 b2.setBounds(100,50,70,40);
		 b3.setBounds(150,50,70,40);

		this.add(b1);
		this.add(b2);
		this.add(b3);
		
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);

		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
			System.exit(0);
			}
		});
	}
	public void actionPerformed(ActionEvent ae)
	{
		String str=ae.getActionCommand();
		if(str.equals("green"))
		this.setBackground(Color.green);
		if(str.equals("blue"))
		this.setBackground(Color.blue);
		if(str.equals("red"))
		this.setBackground(Color.red);
	}

	
	public static void main(String args[])
	{
		myFrame3 mf=new myFrame3();
		mf.setTitle("Interactive Frame");
		mf.setSize(400,400);
		mf.setVisible(true);
	}
}
		