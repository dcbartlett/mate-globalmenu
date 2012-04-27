/* globalmenu-settings.h generated by valac, the Vala compiler, do not modify */


#ifndef __GLOBALMENU_SETTINGS_H__
#define __GLOBALMENU_SETTINGS_H__

#include <glib.h>
#include <glib-object.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS


#define GNOMENU_TYPE_SETTINGS (gnomenu_settings_get_type ())
#define GNOMENU_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_SETTINGS, GnomenuSettings))
#define GNOMENU_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_SETTINGS, GnomenuSettingsClass))
#define GNOMENU_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_SETTINGS))
#define GNOMENU_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_SETTINGS))
#define GNOMENU_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_SETTINGS, GnomenuSettingsClass))

typedef struct _GnomenuSettings GnomenuSettings;
typedef struct _GnomenuSettingsClass GnomenuSettingsClass;
typedef struct _GnomenuSettingsPrivate GnomenuSettingsPrivate;

#define GNOMENU_TYPE_GLOBAL_SETTINGS (gnomenu_global_settings_get_type ())
#define GNOMENU_GLOBAL_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_GLOBAL_SETTINGS, GnomenuGlobalSettings))
#define GNOMENU_GLOBAL_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_GLOBAL_SETTINGS, GnomenuGlobalSettingsClass))
#define GNOMENU_IS_GLOBAL_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_GLOBAL_SETTINGS))
#define GNOMENU_IS_GLOBAL_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_GLOBAL_SETTINGS))
#define GNOMENU_GLOBAL_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_GLOBAL_SETTINGS, GnomenuGlobalSettingsClass))

typedef struct _GnomenuGlobalSettings GnomenuGlobalSettings;
typedef struct _GnomenuGlobalSettingsClass GnomenuGlobalSettingsClass;
typedef struct _GnomenuGlobalSettingsPrivate GnomenuGlobalSettingsPrivate;

#define GNOMENU_TYPE_LOCAL_SETTINGS (gnomenu_local_settings_get_type ())
#define GNOMENU_LOCAL_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_LOCAL_SETTINGS, GnomenuLocalSettings))
#define GNOMENU_LOCAL_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_LOCAL_SETTINGS, GnomenuLocalSettingsClass))
#define GNOMENU_IS_LOCAL_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_LOCAL_SETTINGS))
#define GNOMENU_IS_LOCAL_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_LOCAL_SETTINGS))
#define GNOMENU_LOCAL_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_LOCAL_SETTINGS, GnomenuLocalSettingsClass))

typedef struct _GnomenuLocalSettings GnomenuLocalSettings;
typedef struct _GnomenuLocalSettingsClass GnomenuLocalSettingsClass;
typedef struct _GnomenuLocalSettingsPrivate GnomenuLocalSettingsPrivate;

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

struct _GnomenuGlobalSettings {
	GnomenuSettings parent_instance;
	GnomenuGlobalSettingsPrivate * priv;
};

struct _GnomenuGlobalSettingsClass {
	GnomenuSettingsClass parent_class;
};

struct _GnomenuLocalSettings {
	GnomenuSettings parent_instance;
	GnomenuLocalSettingsPrivate * priv;
};

struct _GnomenuLocalSettingsClass {
	GnomenuSettingsClass parent_class;
};


GType gnomenu_settings_get_type (void) G_GNUC_CONST;
void gnomenu_settings_attach_to_window (GnomenuSettings* self, GdkWindow* window);
char* gnomenu_settings_to_string (GnomenuSettings* self);
void gnomenu_settings_pull (GnomenuSettings* self);
void gnomenu_settings_push (GnomenuSettings* self);
char* gnomenu_settings_get_by_atom (GnomenuSettings* self, GdkAtom atom);
void gnomenu_settings_set_by_atom (GnomenuSettings* self, GdkAtom atom, const char* value);
GnomenuSettings* gnomenu_settings_new (void);
GnomenuSettings* gnomenu_settings_construct (GType object_type);
GdkWindow* gnomenu_settings_get_window (GnomenuSettings* self);
gboolean gnomenu_settings_get_show_local_menu (GnomenuSettings* self);
void gnomenu_settings_set_show_local_menu (GnomenuSettings* self, gboolean value);
gboolean gnomenu_settings_get_show_menu_icons (GnomenuSettings* self);
void gnomenu_settings_set_show_menu_icons (GnomenuSettings* self, gboolean value);
gint gnomenu_settings_get_changed_notify_timeout (GnomenuSettings* self);
void gnomenu_settings_set_changed_notify_timeout (GnomenuSettings* self, gint value);
GType gnomenu_global_settings_get_type (void) G_GNUC_CONST;
GnomenuGlobalSettings* gnomenu_global_settings_get (GdkScreen* screen);
void gnomenu_global_settings_attach_to_screen (GnomenuGlobalSettings* self, GdkScreen* screen);
GdkScreen* gnomenu_global_settings_get_screen (GnomenuGlobalSettings* self);
GType gnomenu_local_settings_get_type (void) G_GNUC_CONST;
GnomenuLocalSettings* gnomenu_local_settings_new (GdkWindow* window);
GnomenuLocalSettings* gnomenu_local_settings_construct (GType object_type, GdkWindow* window);
GnomenuGlobalSettings* gnomenu_local_settings_get_global (GnomenuLocalSettings* self);

extern const char* GNOMENU_SETTINGS_KEYS[3];

G_END_DECLS

#endif