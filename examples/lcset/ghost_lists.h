#ifndef GHOST_LISTS_H
#include "list.h"

lemma int create_ghost_list<t>();
    requires true;
    ensures ghost_list<t>(result, nil);
