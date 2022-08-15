import java.awt.*;
import java.awt.event.*;

class mycheckbox extends Frame implements ItemListener
{
 	Checkbox c1,c2,c3;
	String str="";
	mycheckbox()
	{
		setLayout(new FlowLayout());
		c1=new Checkbox("english",true);
		c2=new Checkbox("hindi");
		c3=new Checkbox("telugu");		
		add(c1);
		add(c2);
		add(c3);
		
		c1.addItemListener(this);
		c2.addItemListener(this);
		c3.addItemListener(this);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
			System.exit(0);
			}
		});
	}
	public void itemStateChanged(ItemEvent ie)
	{

		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawString("selected language", 10,100);
		str="english"+c1.getState();
		g.drawString(str, 10,150);
		str="hindi"+c2.getState();
		g.drawString(str, 10,200);
		str="telugu"+c3.getState();
		g.drawString(str, 10,250);
		
	}
	public static void main(String[]  args)
	{
		mycheckbox mc=new mycheckbox();
		mc.setTitle("language selector");
		mc.setSize(400,400);
		mc.setVisible(true);
	}
}