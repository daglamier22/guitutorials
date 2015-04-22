#ifndef GTKMM_EXAMPLE_BUTTONS_HPP
#define GTKMM_EXAMPLE_BUTTONS_HPP

#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>

class CheckButtons : public Gtk::Window {
public:
	CheckButtons();
	virtual ~CheckButtons();

protected:
	//Signal handlers:
	void on_button_clicked();

	//Child widgets:
	Gtk::CheckButton m_button;
};

#endif //GTKMM_EXAMPLE_BUTTONS_HPP