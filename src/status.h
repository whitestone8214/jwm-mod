/**
 * @file status.h
 * @author Joe Wingbermuehle
 * @date 2004-2006
 *
 * @brief Header for the status functions.
 *
 */

#ifndef STATUS_H
#define STATUS_H

#include "client.h"
#include "settings.h"

struct ClientNode;

/** Create a move status window.
 * @param np The client to be moved.
 */
void CreateMoveWindow(struct ClientNode *np);

/** Update a move status window.
 * @param np The client being moved.
 */
void UpdateMoveWindow(struct ClientNode *np);

/** Destroy a move status window. */
void DestroyMoveWindow(void);

/** Create a resize status window.
 * @param np The client being resized.
 */
void CreateResizeWindow(struct ClientNode *np);

/** Update a resize status window.
 * @param np The client being resized.
 * @param gwidth The width to display.
 * @param gheight The height to display.
 */
void UpdateResizeWindow(struct ClientNode *np, int gwidth, int gheight);

/** Destroy a resize status window. */
void DestroyResizeWindow(void);

void indicator_window_switch_on(const ClientNode *np, StatusWindowType type);
void indicator_window_switch_update(ClientNode *np);
void indicator_window_switch_off();

#endif /* STATUS_H */

