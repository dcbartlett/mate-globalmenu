/* libwnck-1.0.vapi generated by vapigen, do not modify. */

[CCode (cprefix = "Wnck", lower_case_cprefix = "wnck_")]
namespace Wnck {
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class ActionMenu : Gtk.Menu, Atk.Implementor, Gtk.Buildable {
		[CCode (type = "GtkWidget*", has_construct_function = false)]
		public ActionMenu (Wnck.Window window);
		[NoWrapper]
		public virtual void pad1 ();
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
		[NoAccessorMethod]
		public void* window { get; construct; }
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class Application : GLib.Object {
		public static unowned Wnck.Application @get (ulong xwindow);
		public unowned Gdk.Pixbuf get_icon ();
		public bool get_icon_is_fallback ();
		public unowned string get_icon_name ();
		public unowned Gdk.Pixbuf get_mini_icon ();
		public int get_n_windows ();
		public unowned string get_name ();
		public int get_pid ();
		public unowned string get_startup_id ();
		public unowned GLib.List get_windows ();
		public ulong get_xid ();
		[NoWrapper]
		public virtual void pad1 ();
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
		public virtual signal void icon_changed ();
		public virtual signal void name_changed ();
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class ClassGroup : GLib.Object {
		public static unowned Wnck.ClassGroup @get (string res_class);
		public unowned Gdk.Pixbuf get_icon ();
		public unowned Gdk.Pixbuf get_mini_icon ();
		public unowned string get_name ();
		public unowned string get_res_class ();
		public unowned GLib.List get_windows ();
		[NoWrapper]
		public virtual void pad1 ();
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
		public virtual signal void icon_changed ();
		public virtual signal void name_changed ();
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class Pager : Gtk.Widget, Atk.Implementor, Gtk.Buildable {
		[CCode (type = "GtkWidget*", has_construct_function = false)]
		public Pager (Wnck.Screen screen);
		[NoWrapper]
		public virtual void pad1 ();
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
		public void set_display_mode (Wnck.PagerDisplayMode mode);
		public bool set_n_rows (int n_rows);
		public bool set_orientation (Gtk.Orientation orientation);
		public void set_screen (Wnck.Screen screen);
		public void set_shadow_type (Gtk.ShadowType shadow_type);
		public void set_show_all (bool show_all_workspaces);
	}
	[Compact]
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class ResourceUsage {
		public uint n_colormap_entries;
		public uint n_cursors;
		public uint n_fonts;
		public uint n_gcs;
		public uint n_glyphsets;
		public uint n_other;
		public uint n_passive_grabs;
		public uint n_pictures;
		public uint n_pixmaps;
		public uint n_windows;
		public uint pad1;
		public uint pad2;
		public uint pad3;
		public uint pad4;
		public uint pad5;
		public uint pad6;
		public uint pad7;
		public uint pad8;
		public uint pad9;
		public ulong pixmap_bytes;
		public ulong total_bytes_estimate;
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class Screen : GLib.Object {
		public void calc_workspace_layout (int num_workspaces, int space_index, Wnck.WorkspaceLayout layout);
		public void change_workspace_count (int count);
		public void force_update ();
		public static void free_workspace_layout (Wnck.WorkspaceLayout layout);
		public static unowned Wnck.Screen @get (int index);
		public unowned Wnck.Window get_active_window ();
		public unowned Wnck.Workspace get_active_workspace ();
		public ulong get_background_pixmap ();
		public static unowned Wnck.Screen get_default ();
		public static unowned Wnck.Screen get_for_root (ulong root_window_id);
		public int get_height ();
		public int get_number ();
		public unowned Wnck.Window get_previously_active_window ();
		public bool get_showing_desktop ();
		public int get_width ();
		public unowned string get_window_manager_name ();
		public unowned GLib.List<Wnck.Window> get_windows ();
		public unowned GLib.List get_windows_stacked ();
		public unowned Wnck.Workspace get_workspace (int workspace);
		public int get_workspace_count ();
		public int get_workspace_index (Wnck.Workspace space);
		public unowned Wnck.Workspace get_workspace_neighbor (Wnck.Workspace space, Wnck.MotionDirection direction);
		public unowned GLib.List<Wnck.Workspace> get_workspaces ();
		public void move_viewport (int x, int y);
		public bool net_wm_supports (string atom);
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
		[NoWrapper]
		public virtual void pad5 ();
		[NoWrapper]
		public virtual void pad6 ();
		public void release_workspace_layout (int current_token);
		public void toggle_showing_desktop (bool show);
		public int try_set_workspace_layout (int current_token, int rows, int columns);
		public virtual signal void active_window_changed (Wnck.Window? previous_window);
		public virtual signal void active_workspace_changed (Wnck.Workspace? previous_workspace);
		public virtual signal void application_closed (Wnck.Application app);
		public virtual signal void application_opened (Wnck.Application app);
		public virtual signal void background_changed ();
		public virtual signal void class_group_closed (Wnck.ClassGroup class_group);
		public virtual signal void class_group_opened (Wnck.ClassGroup class_group);
		public virtual signal void showing_desktop_changed ();
		public virtual signal void viewports_changed ();
		public virtual signal void window_closed (Wnck.Window window);
		public virtual signal void window_manager_changed ();
		public virtual signal void window_opened (Wnck.Window window);
		public virtual signal void window_stacking_changed ();
		public virtual signal void workspace_created (Wnck.Workspace space);
		public virtual signal void workspace_destroyed (Wnck.Workspace space);
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class Selector : Gtk.MenuBar, Atk.Implementor, Gtk.Buildable {
		[CCode (type = "GtkWidget*", has_construct_function = false)]
		public Selector ();
		[NoWrapper]
		public virtual void pad1 ();
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class Tasklist : Gtk.Container, Atk.Implementor, Gtk.Buildable {
		[CCode (type = "GtkWidget*", has_construct_function = false)]
		public Tasklist (Wnck.Screen screen);
		public int get_minimum_height ();
		public int get_minimum_width ();
		public unowned int[] get_size_hint_list ();
		[NoWrapper]
		public virtual void pad1 ();
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
		public void set_button_relief (Gtk.ReliefStyle relief);
		public void set_grouping (Wnck.TasklistGroupingType grouping);
		public void set_grouping_limit (int limit);
		public void set_icon_loader (Wnck.LoadIconFunction load_icon_func, void* data, GLib.DestroyNotify free_data_func);
		public void set_include_all_workspaces (bool include_all_workspaces);
		public void set_minimum_height (int size);
		public void set_minimum_width (int size);
		public void set_screen (Wnck.Screen screen);
		public void set_switch_workspace_on_unminimize (bool switch_workspace_on_unminimize);
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class Window : GLib.Object {
		public void activate (uint32 timestamp);
		public void activate_transient (uint32 timestamp);
		public void close (uint32 timestamp);
		public static unowned Wnck.Window @get (ulong xwindow);
		public Wnck.WindowActions get_actions ();
		public unowned Wnck.Application get_application ();
		public unowned Wnck.ClassGroup get_class_group ();
		public void get_client_window_geometry (int xp, int yp, int widthp, int heightp);
		public void get_geometry (out int xp, out int yp, out int widthp, out int heightp);
		public ulong get_group_leader ();
		public unowned Gdk.Pixbuf get_icon ();
		public bool get_icon_is_fallback ();
		public unowned string get_icon_name ();
		public unowned Gdk.Pixbuf get_mini_icon ();
		public unowned string get_name ();
		public int get_pid ();
		public unowned Wnck.Screen get_screen ();
		public unowned string get_session_id ();
		public unowned string get_session_id_utf8 ();
		public int get_sort_order ();
		public Wnck.WindowState get_state ();
		public unowned Wnck.Window get_transient ();
		public Wnck.WindowType get_window_type ();
		public unowned Wnck.Workspace get_workspace ();
		public ulong get_xid ();
		public bool has_icon_name ();
		public bool has_name ();
		public bool is_above ();
		public bool is_active ();
		public bool is_below ();
		public bool is_fullscreen ();
		public bool is_in_viewport (Wnck.Workspace workspace);
		public bool is_maximized ();
		public bool is_maximized_horizontally ();
		public bool is_maximized_vertically ();
		public bool is_minimized ();
		public bool is_most_recently_activated ();
		public bool is_on_workspace (Wnck.Workspace workspace);
		public bool is_pinned ();
		public bool is_shaded ();
		public bool is_skip_pager ();
		public bool is_skip_tasklist ();
		public bool is_sticky ();
		public bool is_visible_on_workspace (Wnck.Workspace workspace);
		public void keyboard_move ();
		public void keyboard_size ();
		public void make_above ();
		public void make_below ();
		public void maximize ();
		public void maximize_horizontally ();
		public void maximize_vertically ();
		public void minimize ();
		public void move_to_workspace (Wnck.Workspace space);
		public bool needs_attention ();
		public bool or_transient_needs_attention ();
		[NoWrapper]
		public virtual void pad1 ();
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
		public void pin ();
		public void set_fullscreen (bool fullscreen);
		public void set_geometry (Wnck.WindowGravity gravity, Wnck.WindowMoveResizeMask geometry_mask, int x, int y, int width, int height);
		public void set_icon_geometry (int x, int y, int width, int height);
		public void set_skip_pager (bool skip);
		public void set_skip_tasklist (bool skip);
		public void set_sort_order (int order);
		public void set_window_type (Wnck.WindowType wintype);
		public void shade ();
		public void stick ();
		public bool transient_is_most_recently_activated ();
		public void unmake_above ();
		public void unmake_below ();
		public void unmaximize ();
		public void unmaximize_horizontally ();
		public void unmaximize_vertically ();
		public void unminimize (uint32 timestamp);
		public void unpin ();
		public void unshade ();
		public void unstick ();
		public virtual signal void actions_changed (Wnck.WindowActions changed_mask, Wnck.WindowActions new_actions);
		public virtual signal void geometry_changed ();
		public virtual signal void icon_changed ();
		public virtual signal void name_changed ();
		public virtual signal void state_changed (Wnck.WindowState changed_mask, Wnck.WindowState new_state);
		public virtual signal void workspace_changed ();
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class Workspace : GLib.Object {
		public void activate (uint32 timestamp);
		public void change_name (string name);
		public int get_height ();
		public int get_layout_column ();
		public int get_layout_row ();
		public unowned string get_name ();
		public unowned Wnck.Workspace get_neighbor (Wnck.MotionDirection direction);
		public int get_number ();
		public unowned Wnck.Screen get_screen ();
		public int get_viewport_x ();
		public int get_viewport_y ();
		public int get_width ();
		public bool is_virtual ();
		[NoWrapper]
		public virtual void pad1 ();
		[NoWrapper]
		public virtual void pad2 ();
		[NoWrapper]
		public virtual void pad3 ();
		[NoWrapper]
		public virtual void pad4 ();
		public virtual signal void name_changed ();
	}
	[Compact]
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public class WorkspaceLayout {
		public int cols;
		public int current_col;
		public int current_row;
		public int grid;
		public int grid_area;
		public int rows;
	}
	[CCode (cprefix = "WNCK_CLIENT_TYPE_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	public enum ClientType {
		APPLICATION,
		PAGER
	}
	[CCode (cprefix = "WNCK_MOTION_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	public enum MotionDirection {
		UP,
		DOWN,
		LEFT,
		RIGHT
	}
	[CCode (cprefix = "WNCK_PAGER_DISPLAY_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	public enum PagerDisplayMode {
		NAME,
		CONTENT
	}
	[CCode (cprefix = "WNCK_TASKLIST_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	public enum TasklistGroupingType {
		NEVER_GROUP,
		AUTO_GROUP,
		ALWAYS_GROUP
	}
	[CCode (cprefix = "WNCK_WINDOW_ACTION_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	[Flags]
	public enum WindowActions {
		MOVE,
		RESIZE,
		SHADE,
		STICK,
		MAXIMIZE_HORIZONTALLY,
		MAXIMIZE_VERTICALLY,
		CHANGE_WORKSPACE,
		CLOSE,
		UNMAXIMIZE_HORIZONTALLY,
		UNMAXIMIZE_VERTICALLY,
		UNSHADE,
		UNSTICK,
		MINIMIZE,
		UNMINIMIZE,
		MAXIMIZE,
		UNMAXIMIZE,
		FULLSCREEN,
		ABOVE,
		BELOW
	}
	[CCode (cprefix = "WNCK_WINDOW_GRAVITY_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	public enum WindowGravity {
		CURRENT,
		NORTHWEST,
		NORTH,
		NORTHEAST,
		WEST,
		CENTER,
		EAST,
		SOUTHWEST,
		SOUTH,
		SOUTHEAST,
		STATIC
	}
	[CCode (cprefix = "WNCK_WINDOW_CHANGE_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	[Flags]
	public enum WindowMoveResizeMask {
		X,
		Y,
		WIDTH,
		HEIGHT
	}
	[CCode (cprefix = "WNCK_WINDOW_STATE_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	[Flags]
	public enum WindowState {
		MINIMIZED,
		MAXIMIZED_HORIZONTALLY,
		MAXIMIZED_VERTICALLY,
		SHADED,
		SKIP_PAGER,
		SKIP_TASKLIST,
		STICKY,
		HIDDEN,
		FULLSCREEN,
		DEMANDS_ATTENTION,
		URGENT,
		ABOVE,
		BELOW
	}
	[CCode (cprefix = "WNCK_WINDOW_", has_type_id = false, cheader_filename = "libwnck/libwnck.h")]
	public enum WindowType {
		NORMAL,
		DESKTOP,
		DOCK,
		DIALOG,
		TOOLBAR,
		MENU,
		UTILITY,
		SPLASHSCREEN
	}
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public delegate unowned Gdk.Pixbuf LoadIconFunction (string icon_name, int size, uint flags);
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public static unowned Gtk.Widget create_window_action_menu (Wnck.Window window);
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public static void gtk_window_set_dock_type (Gtk.Window window);
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public static void pid_read_resource_usage (Gdk.Display gdk_display, ulong pid, Wnck.ResourceUsage usage);
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public static void set_client_type (Wnck.ClientType ewmh_sourceindication_client_type);
	[CCode (cheader_filename = "libwnck/libwnck.h")]
	public static void xid_read_resource_usage (Gdk.Display gdk_display, ulong xid, Wnck.ResourceUsage usage);
}
