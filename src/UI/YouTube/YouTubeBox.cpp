#include "YouTubeBox.hpp"

namespace Operator {
    YouTubeBox::YouTubeBox () : Box (Gtk::ORIENTATION_VERTICAL), label ("YouTube") {
        add (label);
    };
    YouTubeBox::~YouTubeBox () {};
};
