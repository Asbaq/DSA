import java.awt.*;
import java.awt.event.*;
class myFrame2 extends Frame
{
	myFrame2()
	{
 	 	addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
			System.exit(0);
			}
		});
			
	}
	public void paint(Graphics g)
	{
		this.setBackground(new Color(100,20,20));
		Font f=new Font("Arail",Font.BOLD,30);
		g.setFont(f);
		g.setColor(Color.blue);
		g.drawString("Hello nigga who is you ?",100,100);
			
	}
	public static void main(String args[])
	{
		myFrame2 mf=new myFrame2();
		mf.setTitle("nigga");
		mf.setVisible(true);
		mf.setSize(400,400);
	
	}
}