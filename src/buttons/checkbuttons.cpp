#include "checkbuttons.hpp"
#include <iostream>

CheckButtons::CheckButtons() : m_button("something") {
	set_title("checkbutton example");
	set_border_width(10);

	m_button.signal_clicked().connect(sigc::mem_fun(*this,
		&CheckButtons::on_button_clicked) );

	add(m_button);

	show_all_children();
}//CheckButtons::CheckButtons

CheckButtons::~CheckButtons() {
}//CheckButtons::~CheckButtons

void CheckButtons::on_button_clicked() {
	std::cout << "The Button was clicked: state="
		<< (m_button.get_active() ? "true" : "false")
		<< std::endl;
}//CheckButtons::on_button_clicked