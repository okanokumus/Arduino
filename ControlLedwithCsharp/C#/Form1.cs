using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Windows.Forms;
using System.IO.Ports;

namespace ControlLED
{
    public partial class Form1 : Form
    {
        int delayTime;

        SerialPort _serialPort = new SerialPort();
      

        #region FORM 
        public Form1()
        {
            InitializeComponent();
            comboBox1.SelectedItem = "Available COMs";
            foreach (string s in SerialPort.GetPortNames())
            {
                comboBox1.Items.Add(s);
            }
            
            
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            turnOn.Enabled = false;
            turnOff.Enabled = false;
            textBox2.Text = "0";
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (_serialPort.IsOpen) _serialPort.Close();
        }
        #endregion

        #region EXIT and RESTART the application
        private void button3_Click(object sender, EventArgs e)
        {
            if (_serialPort.IsOpen) _serialPort.Close();
            Application.Exit();
        }
        private void button4_Click(object sender, EventArgs e)
        {
            Application.Restart();
        }
        #endregion

        #region Open the Connection
        private void button1_Click(object sender, EventArgs e)
        {
            if (comboBox1.SelectedItem.ToString() != "Available COMs")
            {
                _serialPort.PortName = comboBox1.SelectedItem.ToString();
                _serialPort.BaudRate = 9600; // baud rate
                _serialPort.ReadTimeout = 3000;
                _serialPort.WriteTimeout = 3000;
                if (!_serialPort.IsOpen) // if it is not already open try to open 
                {
                    try
                    {
                        _serialPort.Open();
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show(ex.Message);
                        return;
                    }

                    if (_serialPort.IsOpen)
                    {
                        textBox1.Text = "Connection is opened...";
                        turnOn.Enabled = true;
                        turnOff.Enabled = true;
                    }
                }
            }
            else
            {
                MessageBox.Show("Please select an available COM port!!!","Warning",MessageBoxButtons.OK);
            }
        }
        #endregion

        #region Close the Connection
        private void button2_Click(object sender, EventArgs e)
        {

            if (_serialPort.IsOpen)
            {
                _serialPort.Close();
                turnOn.Enabled = false;
                turnOff.Enabled = false;
                textBox1.Text = "Connection is closed...";
            }
        }
        #endregion

        #region Turn On the LED
        private void turnOn_Click(object sender, EventArgs e)
        {
            _serialPort.WriteLine("1");
            turnOn.Enabled = false;
            turnOff.Enabled = true;
            label1.Visible = true;
            textBox2.Visible = true;
            textBox1.Text = "LED is on!!!";
            textBox2.TextChanged += TextBox2_TextChanged;
            // delay time 
            if (delayTime > 0)
            {
               _serialPort.WriteLine(delayTime.ToString());
            }
            
        }

        private void TextBox2_TextChanged(object sender, EventArgs e)
        {
            turnOn.Enabled = true;
            turnOff.Enabled = false;
            try
            {
                delayTime = Convert.ToInt32(textBox2.Text);
            }
            catch (Exception)
            {
                return;
            }

           // throw new NotImplementedException();
        }
        #endregion

        #region Turn Off the LED
        private void turnOff_Click(object sender, EventArgs e)
        {
            _serialPort.WriteLine("0");
            turnOn.Enabled = true;
            turnOff.Enabled = false;
            label1.Visible = false;
            textBox2.Visible = false;
            textBox1.Text = "LED is off!!!";

        }
        #endregion
    }
}
