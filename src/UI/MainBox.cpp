#include "MainBox.hpp"

namespace Operator::UI {
    MainBox::MainBox () : Common::LabelledBox (Gtk::ORIENTATION_HORIZONTAL, "Operator") {
        add (youtubeBox);
    };
    MainBox::~MainBox () {};
};
