import java.awt.*;
import java.awt.event.*;
class mychoice extends Frame implements ItemListener
{
	String str;
	Choice ch;
	mychoice()
	{
		setLayout(new FlowLayout());
		
		ch=new Choice();
		ch.add("Hyderabad");
		ch.add("Ranchi");
		ch.add("Delhi");
		ch.add("Banglore");
		ch.add("Chennai");
		ch.add("Kolkata");
		
		add(ch);
		
		ch.addItemListener(this);
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
		g.drawString("current city",10,100);
		str=ch.getSelectedItem();
		g.drawString(str,10,110);
	}		
	public static void main(String[] args)
	{
		
		mychoice c=new mychoice();
		c.setTitle("choice");
		c.setSize(400,400);
		c.setVisible(true);
	}
}