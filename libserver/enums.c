/* enums.c generated by valac, the Vala compiler
 * generated from enums.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <gtk/gtk.h>


#define GNOMENU_TYPE_BACKGROUND_TYPE (gnomenu_background_type_get_type ())

#define GNOMENU_TYPE_GRAVITY (gnomenu_gravity_get_type ())

typedef enum  {
	GNOMENU_BACKGROUND_TYPE_NONE = 0,
	GNOMENU_BACKGROUND_TYPE_COLOR = 1,
	GNOMENU_BACKGROUND_TYPE_PIXMAP = 2
} GnomenuBackgroundType;

typedef enum  {
	GNOMENU_GRAVITY_DOWN = 0,
	GNOMENU_GRAVITY_UP = 1,
	GNOMENU_GRAVITY_LEFT = 2,
	GNOMENU_GRAVITY_RIGHT = 3
} GnomenuGravity;



#define GNOMENU_NET_GLOBALMENU_MENU_CONTEXT "_NET_GLOBALMENU_MENU_CONTEXT"
#define GNOMENU_NET_GLOBALMENU_MENU_EVENT "_NET_GLOBALMENU_MENU_EVENT"
#define GNOMENU_NET_GLOBALMENU_MENU_SELECT "_NET_GLOBALMENU_MENU_SELECT"
#define GNOMENU_NET_GLOBALMENU_MENU_DESELECT "_NET_GLOBALMENU_MENU_DESELECT"
GType gnomenu_background_type_get_type (void) G_GNUC_CONST;
GType gnomenu_gravity_get_type (void) G_GNUC_CONST;
double gnomenu_gravity_to_text_angle (GnomenuGravity g);
GtkArrowType gnomenu_gravity_to_arrow_type (GnomenuGravity g);



GType gnomenu_background_type_get_type (void) {
	static volatile gsize gnomenu_background_type_type_id__volatile = 0;
	if (g_once_init_enter (&gnomenu_background_type_type_id__volatile)) {
		static const GEnumValue values[] = {{GNOMENU_BACKGROUND_TYPE_NONE, "GNOMENU_BACKGROUND_TYPE_NONE", "none"}, {GNOMENU_BACKGROUND_TYPE_COLOR, "GNOMENU_BACKGROUND_TYPE_COLOR", "color"}, {GNOMENU_BACKGROUND_TYPE_PIXMAP, "GNOMENU_BACKGROUND_TYPE_PIXMAP", "pixmap"}, {0, NULL, NULL}};
		GType gnomenu_background_type_type_id;
		gnomenu_background_type_type_id = g_enum_register_static ("GnomenuBackgroundType", values);
		g_once_init_leave (&gnomenu_background_type_type_id__volatile, gnomenu_background_type_type_id);
	}
	return gnomenu_background_type_type_id__volatile;
}


GType gnomenu_gravity_get_type (void) {
	static volatile gsize gnomenu_gravity_type_id__volatile = 0;
	if (g_once_init_enter (&gnomenu_gravity_type_id__volatile)) {
		static const GEnumValue values[] = {{GNOMENU_GRAVITY_DOWN, "GNOMENU_GRAVITY_DOWN", "down"}, {GNOMENU_GRAVITY_UP, "GNOMENU_GRAVITY_UP", "up"}, {GNOMENU_GRAVITY_LEFT, "GNOMENU_GRAVITY_LEFT", "left"}, {GNOMENU_GRAVITY_RIGHT, "GNOMENU_GRAVITY_RIGHT", "right"}, {0, NULL, NULL}};
		GType gnomenu_gravity_type_id;
		gnomenu_gravity_type_id = g_enum_register_static ("GnomenuGravity", values);
		g_once_init_leave (&gnomenu_gravity_type_id__volatile, gnomenu_gravity_type_id);
	}
	return gnomenu_gravity_type_id__volatile;
}


double gnomenu_gravity_to_text_angle (GnomenuGravity g) {
	double result = 0.0;
	switch (g) {
		case GNOMENU_GRAVITY_UP:
		{
			result = (double) 180;
			return result;
		}
		case GNOMENU_GRAVITY_LEFT:
		{
			result = (double) 270;
			return result;
		}
		case GNOMENU_GRAVITY_RIGHT:
		{
			result = (double) 90;
			return result;
		}
		default:
		{
			result = (double) 0;
			return result;
		}
	}
}


GtkArrowType gnomenu_gravity_to_arrow_type (GnomenuGravity g) {
	GtkArrowType result = 0;
	switch (g) {
		case GNOMENU_GRAVITY_UP:
		{
			result = GTK_ARROW_UP;
			return result;
		}
		case GNOMENU_GRAVITY_LEFT:
		{
			result = GTK_ARROW_LEFT;
			return result;
		}
		case GNOMENU_GRAVITY_RIGHT:
		{
			result = GTK_ARROW_RIGHT;
			return result;
		}
		default:
		{
			result = GTK_ARROW_DOWN;
			return result;
		}
	}
}



