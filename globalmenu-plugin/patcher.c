/* patcher.c generated by valac, the Vala compiler
 * generated from patcher.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gobject/gvaluecollector.h>


#define TYPE_PATCHER (patcher_get_type ())
#define PATCHER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PATCHER, Patcher))
#define PATCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PATCHER, PatcherClass))
#define IS_PATCHER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PATCHER))
#define IS_PATCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PATCHER))
#define PATCHER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PATCHER, PatcherClass))

typedef struct _Patcher Patcher;
typedef struct _PatcherClass PatcherClass;
typedef struct _PatcherPrivate PatcherPrivate;

#define TYPE_MENU_BAR (menu_bar_get_type ())
#define MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MENU_BAR, MenuBar))
#define MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MENU_BAR, MenuBarClass))
#define IS_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MENU_BAR))
#define IS_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MENU_BAR))
#define MENU_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MENU_BAR, MenuBarClass))

typedef struct _MenuBar MenuBar;
typedef struct _MenuBarClass MenuBarClass;

#define TYPE_WIDGET (widget_get_type ())
#define WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_WIDGET, Widget))
#define WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_WIDGET, WidgetClass))
#define IS_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_WIDGET))
#define IS_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_WIDGET))
#define WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_WIDGET, WidgetClass))

typedef struct _Widget Widget;
typedef struct _WidgetClass WidgetClass;
#define _menu_bar_unref0(var) ((var == NULL) ? NULL : (var = (menu_bar_unref (var), NULL)))
#define _widget_unref0(var) ((var == NULL) ? NULL : (var = (widget_unref (var), NULL)))
typedef struct _ParamSpecPatcher ParamSpecPatcher;

struct _Patcher {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PatcherPrivate * priv;
};

struct _PatcherClass {
	GTypeClass parent_class;
	void (*finalize) (Patcher *self);
};

struct _PatcherPrivate {
	MenuBar* menubar;
	Widget* widget;
};

struct _ParamSpecPatcher {
	GParamSpec parent_instance;
};


static gpointer patcher_parent_class = NULL;

gpointer patcher_ref (gpointer instance);
void patcher_unref (gpointer instance);
GParamSpec* param_spec_patcher (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_patcher (GValue* value, gpointer v_object);
void value_take_patcher (GValue* value, gpointer v_object);
gpointer value_get_patcher (const GValue* value);
GType patcher_get_type (void) G_GNUC_CONST;
gpointer menu_bar_ref (gpointer instance);
void menu_bar_unref (gpointer instance);
GParamSpec* param_spec_menu_bar (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_menu_bar (GValue* value, gpointer v_object);
void value_take_menu_bar (GValue* value, gpointer v_object);
gpointer value_get_menu_bar (const GValue* value);
GType menu_bar_get_type (void) G_GNUC_CONST;
gpointer widget_ref (gpointer instance);
void widget_unref (gpointer instance);
GParamSpec* param_spec_widget (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_widget (GValue* value, gpointer v_object);
void value_take_widget (GValue* value, gpointer v_object);
gpointer value_get_widget (const GValue* value);
GType widget_get_type (void) G_GNUC_CONST;
#define PATCHER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_PATCHER, PatcherPrivate))
enum  {
	PATCHER_DUMMY_PROPERTY
};
MenuBar* menu_bar_new (void);
MenuBar* menu_bar_construct (GType object_type);
Widget* widget_new (void);
Widget* widget_construct (GType object_type);
Patcher* patcher_new (void);
Patcher* patcher_construct (GType object_type);
void superrider_release_all (void);
static void patcher_finalize (Patcher* obj);



Patcher* patcher_construct (GType object_type) {
	Patcher* self;
	MenuBar* _tmp0_;
	Widget* _tmp1_;
	self = (Patcher*) g_type_create_instance (object_type);
	self->priv->menubar = (_tmp0_ = menu_bar_new (), _menu_bar_unref0 (self->priv->menubar), _tmp0_);
	self->priv->widget = (_tmp1_ = widget_new (), _widget_unref0 (self->priv->widget), _tmp1_);
	return self;
}


Patcher* patcher_new (void) {
	return patcher_construct (TYPE_PATCHER);
}


static void value_patcher_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_patcher_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		patcher_unref (value->data[0].v_pointer);
	}
}


static void value_patcher_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = patcher_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_patcher_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_patcher_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		Patcher* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = patcher_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_patcher_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	Patcher** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags && G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = patcher_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_patcher (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecPatcher* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_PATCHER), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_patcher (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PATCHER), NULL);
	return value->data[0].v_pointer;
}


void value_set_patcher (GValue* value, gpointer v_object) {
	Patcher* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PATCHER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PATCHER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		patcher_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		patcher_unref (old);
	}
}


void value_take_patcher (GValue* value, gpointer v_object) {
	Patcher* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PATCHER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PATCHER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		patcher_unref (old);
	}
}


static void patcher_class_init (PatcherClass * klass) {
	patcher_parent_class = g_type_class_peek_parent (klass);
	PATCHER_CLASS (klass)->finalize = patcher_finalize;
	g_type_class_add_private (klass, sizeof (PatcherPrivate));
}


static void patcher_instance_init (Patcher * self) {
	self->priv = PATCHER_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void patcher_finalize (Patcher* obj) {
	Patcher * self;
	self = PATCHER (obj);
	{
		superrider_release_all ();
	}
	_menu_bar_unref0 (self->priv->menubar);
	_widget_unref0 (self->priv->widget);
}


GType patcher_get_type (void) {
	static volatile gsize patcher_type_id__volatile = 0;
	if (g_once_init_enter (&patcher_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_patcher_init, value_patcher_free_value, value_patcher_copy_value, value_patcher_peek_pointer, "p", value_patcher_collect_value, "p", value_patcher_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (PatcherClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) patcher_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Patcher), 0, (GInstanceInitFunc) patcher_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType patcher_type_id;
		patcher_type_id = g_type_register_fundamental (g_type_fundamental_next (), "Patcher", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&patcher_type_id__volatile, patcher_type_id);
	}
	return patcher_type_id__volatile;
}


gpointer patcher_ref (gpointer instance) {
	Patcher* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void patcher_unref (gpointer instance) {
	Patcher* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		PATCHER_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}




