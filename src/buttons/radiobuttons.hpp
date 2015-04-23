#ifndef GTKMM_EXAMPLE_RADIOBUTTONS_HPP
#define GTKMM_EXAMPLE_RADIOBUTTONS_HPP

#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/separator.h>

class RadioButtons : public Gtk::Window {
public:
	RadioButtons();
	virtual ~RadioButtons();

protected:
	//Signal handlers:
	void on_button_clicked();

	//Child widgets:
	Gtk::Box			m_Box_Top;
	Gtk::Box			m_Box1;
	Gtk::Box			m_Box2;

	Gtk::RadioButton	m_RadioButton1;
	Gtk::RadioButton	m_RadioButton2;
	Gtk::RadioButton	m_RadioButton3;

	Gtk::Separator		m_Separator;
	
	Gtk::Button			m_Button_Close;
};

#endif //GTKMM_EXAMPLE_RADIOBUTTONS_HPP