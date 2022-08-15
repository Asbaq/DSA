import java.awt.*;
import java.awt.event.*;

class checkboxgroup extends Frame implements ItemListener
{
 	Checkbox c1,c2,c3;
	CheckboxGroup cbg;
	Checkbox m,f;
	String str="";
	checkboxgroup()
	{
		setLayout(new FlowLayout());
		c1=new Checkbox("english",true);
		c2=new Checkbox("hindi");
		c3=new Checkbox("telugu");	
		cbg=new CheckboxGroup();
		m=new Checkbox("male",cbg,true);
		f=new Checkbox("female",cbg,false);	
		add(c1);
		add(c2);
		add(c3);
		add(m);
		add(f);
		
		c1.addItemListener(this);
		c2.addItemListener(this);
		c3.addItemListener(this);
		m.addItemListener(this);
		f.addItemListener(this);
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
		g.drawString(str, 50,150);
		str="hindi"+c2.getState();
		g.drawString(str, 10,200);
		str="telugu"+c3.getState();
		g.drawString(str, 10,250);
		str="gender=";
		str=str+cbg.getSelectedCheckbox().getLabel();
		g.drawString(str,10,260);
		
	}
	public static void main(String[]  args)
	{
		checkboxgroup mc=new checkboxgroup();
		mc.setTitle("language selector");
		mc.setSize(400,400);
		mc.setVisible(true);
	}
}