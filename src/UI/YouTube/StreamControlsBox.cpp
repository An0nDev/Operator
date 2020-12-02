#include "StreamControlsBox.hpp"

namespace Operator::UI::YouTube {
    StreamControlsBox::StreamControlsBox ()
    : Operator::UI::Common::LabelledBox (Gtk::ORIENTATION_VERTICAL, "Stream Controls"),
    configureButton ("Configure"),
    startStopButton ("Start") {
        add (configureButton);
        add (startStopButton);
    };
    StreamControlsBox::~StreamControlsBox () {};
};
