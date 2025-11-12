// --------------------  batch_msg.h  --------------------
#pragma once

// A very small token that is passed from the RX operator to the TX operator.
// It does not contain any data – the TX operator just needs to know *that* a
// batch has been completed.
struct BatchMsg { };
