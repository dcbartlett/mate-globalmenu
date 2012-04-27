/* settings.c generated by valac, the Vala compiler
 * generated from settings.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <X11/Xatom.h>
#include <X11/Xutil.h>
#include <X11/Xregion.h>
#include <gdk/gdkx.h>
#include <stdio.h>


#define GNOMENU_TYPE_SETTINGS (gnomenu_settings_get_type ())
#define GNOMENU_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_SETTINGS, GnomenuSettings))
#define GNOMENU_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_SETTINGS, GnomenuSettingsClass))
#define GNOMENU_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_SETTINGS))
#define GNOMENU_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_SETTINGS))
#define GNOMENU_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_SETTINGS, GnomenuSettingsClass))

typedef struct _GnomenuSettings GnomenuSettings;
typedef struct _GnomenuSettingsClass GnomenuSettingsClass;
typedef struct _GnomenuSettingsPrivate GnomenuSettingsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_key_file_free0(var) ((var == NULL) ? NULL : (var = (g_key_file_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _GnomenuSettings {
	GObject parent_instance;
	GnomenuSettingsPrivate * priv;
	GKeyFile* keyfile;
};

struct _GnomenuSettingsClass {
	GObjectClass parent_class;
	void (*attach_to_window) (GnomenuSettings* self, GdkWindow* window);
	gboolean (*get_show_local_menu) (GnomenuSettings* self);
	void (*set_show_local_menu) (GnomenuSettings* self, gboolean value);
	gboolean (*get_show_menu_icons) (GnomenuSettings* self);
	void (*set_show_menu_icons) (GnomenuSettings* self, gboolean value);
	gint (*get_changed_notify_timeout) (GnomenuSettings* self);
	void (*set_changed_notify_timeout) (GnomenuSettings* self, gint value);
};

struct _GnomenuSettingsPrivate {
	GdkWindow* _window;
	GdkAtom atom;
	gboolean _show_local_menu;
	gboolean _show_menu_icons;
	gint _changed_notify_timeout;
};


static gpointer gnomenu_settings_parent_class = NULL;

GType gnomenu_settings_get_type (void) G_GNUC_CONST;
#define GNOMENU_SETTINGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GNOMENU_TYPE_SETTINGS, GnomenuSettingsPrivate))
enum  {
	GNOMENU_SETTINGS_DUMMY_PROPERTY,
	GNOMENU_SETTINGS_WINDOW,
	GNOMENU_SETTINGS_SHOW_LOCAL_MENU,
	GNOMENU_SETTINGS_SHOW_MENU_ICONS,
	GNOMENU_SETTINGS_CHANGED_NOTIFY_TIMEOUT
};
GdkWindow* gnomenu_settings_get_window (GnomenuSettings* self);
static GdkFilterReturn gnomenu_settings_event_filter (GdkXEvent* xevent, GdkEvent* event, GnomenuSettings* self);
static GdkFilterReturn _gnomenu_settings_event_filter_gdk_filter_func (GdkXEvent* xevent, GdkEvent* event, gpointer self);
static void gnomenu_settings_set_window (GnomenuSettings* self, GdkWindow* value);
void gnomenu_settings_pull (GnomenuSettings* self);
void gnomenu_settings_attach_to_window (GnomenuSettings* self, GdkWindow* window);
static void gnomenu_settings_real_attach_to_window (GnomenuSettings* self, GdkWindow* window);
static GdkFilterReturn gnomenu_settings_real_event_filter (XEvent* xevent, GdkEvent* event, GnomenuSettings* self);
static gboolean gnomenu_settings_atom_equal (GnomenuSettings* self, GdkAtom a1, GdkAtom a2);
static gboolean gnomenu_settings_is_tristate (gboolean boolean);
static gboolean gnomenu_settings_load_boolean (GnomenuSettings* self, const char* key);
static gint gnomenu_settings_load_int (GnomenuSettings* self, const char* key);
static char* gnomenu_settings_load_string (GnomenuSettings* self, const char* key);
static void gnomenu_settings_save_boolean (GnomenuSettings* self, const char* key, gboolean value);
static void gnomenu_settings_save_string (GnomenuSettings* self, const char* key, const char* value);
static void gnomenu_settings_save_int (GnomenuSettings* self, const char* key, gint value);
static void gnomenu_settings_save_property (GnomenuSettings* self, const char* key);
static void gnomenu_settings_load_property (GnomenuSettings* self, const char* key);
char* gnomenu_settings_to_string (GnomenuSettings* self);
char* gnomenu_settings_get_by_atom (GnomenuSettings* self, GdkAtom atom);
void gnomenu_settings_set_by_atom (GnomenuSettings* self, GdkAtom atom, const char* value);
void gnomenu_settings_push (GnomenuSettings* self);
GnomenuSettings* gnomenu_settings_new (void);
GnomenuSettings* gnomenu_settings_construct (GType object_type);
gboolean gnomenu_settings_get_show_local_menu (GnomenuSettings* self);
void gnomenu_settings_set_show_local_menu (GnomenuSettings* self, gboolean value);
gboolean gnomenu_settings_get_show_menu_icons (GnomenuSettings* self);
void gnomenu_settings_set_show_menu_icons (GnomenuSettings* self, gboolean value);
gint gnomenu_settings_get_changed_notify_timeout (GnomenuSettings* self);
void gnomenu_settings_set_changed_notify_timeout (GnomenuSettings* self, gint value);
static void gnomenu_settings_finalize (GObject* obj);
static void gnomenu_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void gnomenu_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);

const char* GNOMENU_SETTINGS_KEYS[3] = {"show-local-menu", "show-menu-icons", "changed-notify-timeout"};


static GdkFilterReturn _gnomenu_settings_event_filter_gdk_filter_func (GdkXEvent* xevent, GdkEvent* event, gpointer self) {
	GdkFilterReturn result;
	result = gnomenu_settings_event_filter (xevent, event, self);
	return result;
}


static void gnomenu_settings_real_attach_to_window (GnomenuSettings* self, GdkWindow* window) {
	GdkEventMask events;
	g_return_if_fail (self != NULL);
	if (self->priv->_window != NULL) {
		gdk_window_remove_filter (window, _gnomenu_settings_event_filter_gdk_filter_func, self);
	}
	if (window == NULL) {
		return;
	}
	gnomenu_settings_set_window (self, window);
	gdk_window_add_filter (self->priv->_window, _gnomenu_settings_event_filter_gdk_filter_func, self);
	events = gdk_window_get_events (self->priv->_window);
	gdk_window_set_events (self->priv->_window, events | GDK_PROPERTY_CHANGE_MASK);
	gnomenu_settings_pull (self);
}


void gnomenu_settings_attach_to_window (GnomenuSettings* self, GdkWindow* window) {
	GNOMENU_SETTINGS_GET_CLASS (self)->attach_to_window (self, window);
}


static GdkFilterReturn gnomenu_settings_event_filter (GdkXEvent* xevent, GdkEvent* event, GnomenuSettings* self) {
	GdkFilterReturn result = 0;
	void* pointer;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (event != NULL, 0);
	pointer = xevent;
	result = gnomenu_settings_real_event_filter ((XEvent*) pointer, event, self);
	return result;
}


static gboolean gnomenu_settings_atom_equal (GnomenuSettings* self, GdkAtom a1, GdkAtom a2) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	result = ((gint) a1) == ((gint) a2);
	return result;
}


static GdkFilterReturn gnomenu_settings_real_event_filter (XEvent* xevent, GdkEvent* event, GnomenuSettings* self) {
	GdkFilterReturn result = 0;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (event != NULL, 0);
	switch ((*xevent).type) {
		case PropertyNotify:
		{
			GdkAtom atom_in;
			atom_in = gdk_x11_xatom_to_atom ((*xevent).xproperty.atom);
			if (gnomenu_settings_atom_equal (self, self->priv->atom, atom_in)) {
				gnomenu_settings_pull (self);
			}
			break;
		}
	}
	result = GDK_FILTER_CONTINUE;
	return result;
}


static gboolean gnomenu_settings_is_tristate (gboolean boolean) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	if (boolean != TRUE) {
		_tmp0_ = boolean != FALSE;
	} else {
		_tmp0_ = FALSE;
	}
	result = _tmp0_;
	return result;
}


static gboolean gnomenu_settings_load_boolean (GnomenuSettings* self, const char* key) {
	gboolean result = FALSE;
	GError * _inner_error_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (key != NULL, FALSE);
	_inner_error_ = NULL;
	{
		gboolean _tmp0_;
		_tmp0_ = g_key_file_get_boolean (self->keyfile, "GlobalMenu:Client", key, &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch0_g_error;
		}
		result = _tmp0_;
		return result;
	}
	goto __finally0;
	__catch0_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
		{
			result = (gboolean) 30;
			return result;
		}
	}
	__finally0:
	{
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return FALSE;
	}
}


static gint gnomenu_settings_load_int (GnomenuSettings* self, const char* key) {
	gint result = 0;
	GError * _inner_error_;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (key != NULL, 0);
	_inner_error_ = NULL;
	{
		gint _tmp0_;
		_tmp0_ = g_key_file_get_integer (self->keyfile, "GlobalMenu:Client", key, &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch1_g_error;
		}
		result = _tmp0_;
		return result;
	}
	goto __finally1;
	__catch1_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
		{
			result = -1;
			return result;
		}
	}
	__finally1:
	{
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return 0;
	}
}


static char* gnomenu_settings_load_string (GnomenuSettings* self, const char* key) {
	char* result = NULL;
	GError * _inner_error_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (key != NULL, NULL);
	_inner_error_ = NULL;
	{
		char* _tmp0_;
		_tmp0_ = g_key_file_get_string (self->keyfile, "GlobalMenu:Client", key, &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch2_g_error;
		}
		result = _tmp0_;
		return result;
	}
	goto __finally2;
	__catch2_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
		{
			result = NULL;
			return result;
		}
	}
	__finally2:
	{
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


static void gnomenu_settings_save_boolean (GnomenuSettings* self, const char* key, gboolean value) {
	GError * _inner_error_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_inner_error_ = NULL;
	{
		if (!gnomenu_settings_is_tristate (value)) {
			g_key_file_set_boolean (self->keyfile, "GlobalMenu:Client", key, value);
		} else {
			g_key_file_remove_key (self->keyfile, "GlobalMenu:Client", key, &_inner_error_);
			if (_inner_error_ != NULL) {
				goto __catch3_g_error;
			}
		}
	}
	goto __finally3;
	__catch3_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
		{
		}
	}
	__finally3:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void gnomenu_settings_save_string (GnomenuSettings* self, const char* key, const char* value) {
	GError * _inner_error_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_inner_error_ = NULL;
	{
		if (value != NULL) {
			g_key_file_set_string (self->keyfile, "GlobalMenu:Client", key, value);
		} else {
			g_key_file_remove_key (self->keyfile, "GlobalMenu:Client", key, &_inner_error_);
			if (_inner_error_ != NULL) {
				goto __catch4_g_error;
			}
		}
	}
	goto __finally4;
	__catch4_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
		{
		}
	}
	__finally4:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void gnomenu_settings_save_int (GnomenuSettings* self, const char* key, gint value) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	g_key_file_set_integer (self->keyfile, "GlobalMenu:Client", key, value);
}


static void gnomenu_settings_save_property (GnomenuSettings* self, const char* key) {
	GObjectClass* klass;
	GParamSpec* pspec;
	GValue value = {0};
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	klass = (GObjectClass*) G_OBJECT_GET_CLASS ((GObject*) self);
	pspec = g_object_class_find_property (klass, key);
	g_value_init (&value, pspec->value_type);
	g_object_get_property ((GObject*) self, key, &value);
	if (pspec->value_type == G_TYPE_BOOLEAN) {
		gnomenu_settings_save_boolean (self, key, g_value_get_boolean (&value));
	} else {
		if (pspec->value_type == G_TYPE_STRING) {
			gnomenu_settings_save_string (self, key, g_value_get_string (&value));
		} else {
			if (pspec->value_type == G_TYPE_INT) {
				gnomenu_settings_save_int (self, key, g_value_get_int (&value));
			} else {
				fprintf (stdout, "unsupported value type `%s'.\n", g_type_name (pspec->value_type));
				G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
				return;
			}
		}
	}
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
}


static void gnomenu_settings_load_property (GnomenuSettings* self, const char* key) {
	GObjectClass* klass;
	GParamSpec* pspec;
	GValue value = {0};
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	klass = (GObjectClass*) G_OBJECT_GET_CLASS ((GObject*) self);
	pspec = g_object_class_find_property (klass, key);
	g_value_init (&value, pspec->value_type);
	if (pspec->value_type == G_TYPE_BOOLEAN) {
		g_value_set_boolean (&value, gnomenu_settings_load_boolean (self, key));
	} else {
		if (pspec->value_type == G_TYPE_STRING) {
			char* _tmp0_;
			g_value_set_string (&value, _tmp0_ = gnomenu_settings_load_string (self, key));
			_g_free0 (_tmp0_);
		} else {
			if (pspec->value_type == G_TYPE_INT) {
				g_value_set_int (&value, gnomenu_settings_load_int (self, key));
			} else {
				fprintf (stdout, "unsupported value type `%s'.\n", g_type_name (pspec->value_type));
				G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
				return;
			}
		}
	}
	g_object_set_property ((GObject*) self, key, &value);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
}


char* gnomenu_settings_to_string (GnomenuSettings* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	{
		const char** key_collection;
		int key_collection_length1;
		int key_it;
		key_collection = GNOMENU_SETTINGS_KEYS;
		key_collection_length1 = G_N_ELEMENTS (GNOMENU_SETTINGS_KEYS);
		for (key_it = 0; key_it < G_N_ELEMENTS (GNOMENU_SETTINGS_KEYS); key_it = key_it + 1) {
			const char* key;
			key = key_collection[key_it];
			{
				gnomenu_settings_save_property (self, key);
			}
		}
	}
	result = g_key_file_to_data (self->keyfile, NULL, NULL);
	return result;
}


static glong string_get_length (const char* self) {
	glong result;
	g_return_val_if_fail (self != NULL, 0L);
	result = g_utf8_strlen (self, -1);
	return result;
}


void gnomenu_settings_pull (GnomenuSettings* self) {
	GError * _inner_error_;
	char* data;
	g_return_if_fail (self != NULL);
	_inner_error_ = NULL;
	data = gnomenu_settings_get_by_atom (self, self->priv->atom);
	if (data == NULL) {
		_g_free0 (data);
		return;
	}
	g_key_file_load_from_data (self->keyfile, data, (gsize) string_get_length (data), G_KEY_FILE_NONE, &_inner_error_);
	if (_inner_error_ != NULL) {
		_g_free0 (data);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	{
		const char** key_collection;
		int key_collection_length1;
		int key_it;
		key_collection = GNOMENU_SETTINGS_KEYS;
		key_collection_length1 = G_N_ELEMENTS (GNOMENU_SETTINGS_KEYS);
		for (key_it = 0; key_it < G_N_ELEMENTS (GNOMENU_SETTINGS_KEYS); key_it = key_it + 1) {
			const char* key;
			key = key_collection[key_it];
			{
				gnomenu_settings_load_property (self, key);
			}
		}
	}
	_g_free0 (data);
}


void gnomenu_settings_push (GnomenuSettings* self) {
	char* str;
	g_return_if_fail (self != NULL);
	str = gnomenu_settings_to_string (self);
	gnomenu_settings_set_by_atom (self, self->priv->atom, str);
	_g_free0 (str);
}


char* gnomenu_settings_get_by_atom (GnomenuSettings* self, GdkAtom atom) {
	char* result = NULL;
	char* context;
	GdkAtom actual_type;
	GdkAtom type;
	gint actual_format = 0;
	gint actual_length = 0;
	char* _tmp1_;
	char* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	context = NULL;
	type = gdk_atom_intern ("STRING", FALSE);
	gdk_property_get (self->priv->_window, atom, type, (gulong) 0, (gulong) G_MAXLONG, FALSE, &actual_type, &actual_format, &actual_length, &_tmp0_);
	context = (_tmp1_ = _tmp0_, _g_free0 (context), _tmp1_);
	result = context;
	return result;
}


void gnomenu_settings_set_by_atom (GnomenuSettings* self, GdkAtom atom, const char* value) {
	g_return_if_fail (self != NULL);
	if (value != NULL) {
		GdkAtom type;
		type = gdk_atom_intern ("STRING", FALSE);
		gdk_property_change (self->priv->_window, atom, type, 8, GDK_PROP_MODE_REPLACE, value, ((gint) strlen (value)) + 1);
	} else {
		gdk_property_delete (self->priv->_window, atom);
	}
}


GnomenuSettings* gnomenu_settings_construct (GType object_type) {
	GnomenuSettings * self;
	self = (GnomenuSettings*) g_object_new (object_type, NULL);
	return self;
}


GnomenuSettings* gnomenu_settings_new (void) {
	return gnomenu_settings_construct (GNOMENU_TYPE_SETTINGS);
}


GdkWindow* gnomenu_settings_get_window (GnomenuSettings* self) {
	GdkWindow* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_window;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void gnomenu_settings_set_window (GnomenuSettings* self, GdkWindow* value) {
	GdkWindow* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_window = (_tmp0_ = _g_object_ref0 (value), _g_object_unref0 (self->priv->_window), _tmp0_);
	g_object_notify ((GObject *) self, "window");
}


gboolean gnomenu_settings_get_show_local_menu (GnomenuSettings* self) {
	return GNOMENU_SETTINGS_GET_CLASS (self)->get_show_local_menu (self);
}


static gboolean gnomenu_settings_real_get_show_local_menu (GnomenuSettings* base) {
	gboolean result;
	GnomenuSettings* self;
	self = base;
	result = self->priv->_show_local_menu;
	return result;
}


void gnomenu_settings_set_show_local_menu (GnomenuSettings* self, gboolean value) {
	GNOMENU_SETTINGS_GET_CLASS (self)->set_show_local_menu (self, value);
}


static void gnomenu_settings_real_set_show_local_menu (GnomenuSettings* base, gboolean value) {
	GnomenuSettings* self;
	self = base;
	self->priv->_show_local_menu = value;
	g_object_notify ((GObject *) self, "show-local-menu");
}


gboolean gnomenu_settings_get_show_menu_icons (GnomenuSettings* self) {
	return GNOMENU_SETTINGS_GET_CLASS (self)->get_show_menu_icons (self);
}


static gboolean gnomenu_settings_real_get_show_menu_icons (GnomenuSettings* base) {
	gboolean result;
	GnomenuSettings* self;
	self = base;
	result = self->priv->_show_menu_icons;
	return result;
}


void gnomenu_settings_set_show_menu_icons (GnomenuSettings* self, gboolean value) {
	GNOMENU_SETTINGS_GET_CLASS (self)->set_show_menu_icons (self, value);
}


static void gnomenu_settings_real_set_show_menu_icons (GnomenuSettings* base, gboolean value) {
	GnomenuSettings* self;
	self = base;
	self->priv->_show_menu_icons = value;
	g_object_notify ((GObject *) self, "show-menu-icons");
}


gint gnomenu_settings_get_changed_notify_timeout (GnomenuSettings* self) {
	return GNOMENU_SETTINGS_GET_CLASS (self)->get_changed_notify_timeout (self);
}


static gint gnomenu_settings_real_get_changed_notify_timeout (GnomenuSettings* base) {
	gint result;
	GnomenuSettings* self;
	self = base;
	result = self->priv->_changed_notify_timeout;
	return result;
}


void gnomenu_settings_set_changed_notify_timeout (GnomenuSettings* self, gint value) {
	GNOMENU_SETTINGS_GET_CLASS (self)->set_changed_notify_timeout (self, value);
}


static void gnomenu_settings_real_set_changed_notify_timeout (GnomenuSettings* base, gint value) {
	GnomenuSettings* self;
	self = base;
	self->priv->_changed_notify_timeout = value;
	g_object_notify ((GObject *) self, "changed-notify-timeout");
}


static void gnomenu_settings_class_init (GnomenuSettingsClass * klass) {
	gnomenu_settings_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GnomenuSettingsPrivate));
	GNOMENU_SETTINGS_CLASS (klass)->attach_to_window = gnomenu_settings_real_attach_to_window;
	GNOMENU_SETTINGS_CLASS (klass)->get_show_local_menu = gnomenu_settings_real_get_show_local_menu;
	GNOMENU_SETTINGS_CLASS (klass)->set_show_local_menu = gnomenu_settings_real_set_show_local_menu;
	GNOMENU_SETTINGS_CLASS (klass)->get_show_menu_icons = gnomenu_settings_real_get_show_menu_icons;
	GNOMENU_SETTINGS_CLASS (klass)->set_show_menu_icons = gnomenu_settings_real_set_show_menu_icons;
	GNOMENU_SETTINGS_CLASS (klass)->get_changed_notify_timeout = gnomenu_settings_real_get_changed_notify_timeout;
	GNOMENU_SETTINGS_CLASS (klass)->set_changed_notify_timeout = gnomenu_settings_real_set_changed_notify_timeout;
	G_OBJECT_CLASS (klass)->get_property = gnomenu_settings_get_property;
	G_OBJECT_CLASS (klass)->set_property = gnomenu_settings_set_property;
	G_OBJECT_CLASS (klass)->finalize = gnomenu_settings_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GNOMENU_SETTINGS_WINDOW, g_param_spec_object ("window", "window", "window", GDK_TYPE_WINDOW, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GNOMENU_SETTINGS_SHOW_LOCAL_MENU, g_param_spec_boolean ("show-local-menu", "show-local-menu", "show-local-menu", TRUE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GNOMENU_SETTINGS_SHOW_MENU_ICONS, g_param_spec_boolean ("show-menu-icons", "show-menu-icons", "show-menu-icons", TRUE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GNOMENU_SETTINGS_CHANGED_NOTIFY_TIMEOUT, g_param_spec_int ("changed-notify-timeout", "changed-notify-timeout", "changed-notify-timeout", G_MININT, G_MAXINT, 500, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void gnomenu_settings_instance_init (GnomenuSettings * self) {
	self->priv = GNOMENU_SETTINGS_GET_PRIVATE (self);
	self->priv->atom = gdk_atom_intern ("_NET_GLOBALMENU_SETTINGS", FALSE);
	self->keyfile = g_key_file_new ();
	self->priv->_show_local_menu = TRUE;
	self->priv->_show_menu_icons = TRUE;
	self->priv->_changed_notify_timeout = 500;
}


static void gnomenu_settings_finalize (GObject* obj) {
	GnomenuSettings * self;
	self = GNOMENU_SETTINGS (obj);
	{
		gnomenu_settings_attach_to_window (self, NULL);
	}
	_g_object_unref0 (self->priv->_window);
	_g_key_file_free0 (self->keyfile);
	G_OBJECT_CLASS (gnomenu_settings_parent_class)->finalize (obj);
}


GType gnomenu_settings_get_type (void) {
	static volatile gsize gnomenu_settings_type_id__volatile = 0;
	if (g_once_init_enter (&gnomenu_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GnomenuSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gnomenu_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GnomenuSettings), 0, (GInstanceInitFunc) gnomenu_settings_instance_init, NULL };
		GType gnomenu_settings_type_id;
		gnomenu_settings_type_id = g_type_register_static (G_TYPE_OBJECT, "GnomenuSettings", &g_define_type_info, 0);
		g_once_init_leave (&gnomenu_settings_type_id__volatile, gnomenu_settings_type_id);
	}
	return gnomenu_settings_type_id__volatile;
}


static void gnomenu_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GnomenuSettings * self;
	self = GNOMENU_SETTINGS (object);
	switch (property_id) {
		case GNOMENU_SETTINGS_WINDOW:
		g_value_set_object (value, gnomenu_settings_get_window (self));
		break;
		case GNOMENU_SETTINGS_SHOW_LOCAL_MENU:
		g_value_set_boolean (value, gnomenu_settings_get_show_local_menu (self));
		break;
		case GNOMENU_SETTINGS_SHOW_MENU_ICONS:
		g_value_set_boolean (value, gnomenu_settings_get_show_menu_icons (self));
		break;
		case GNOMENU_SETTINGS_CHANGED_NOTIFY_TIMEOUT:
		g_value_set_int (value, gnomenu_settings_get_changed_notify_timeout (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void gnomenu_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GnomenuSettings * self;
	self = GNOMENU_SETTINGS (object);
	switch (property_id) {
		case GNOMENU_SETTINGS_WINDOW:
		gnomenu_settings_set_window (self, g_value_get_object (value));
		break;
		case GNOMENU_SETTINGS_SHOW_LOCAL_MENU:
		gnomenu_settings_set_show_local_menu (self, g_value_get_boolean (value));
		break;
		case GNOMENU_SETTINGS_SHOW_MENU_ICONS:
		gnomenu_settings_set_show_menu_icons (self, g_value_get_boolean (value));
		break;
		case GNOMENU_SETTINGS_CHANGED_NOTIFY_TIMEOUT:
		gnomenu_settings_set_changed_notify_timeout (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}




