/* globalmenu-settings.vapi generated by valac, do not modify. */

[CCode (cprefix = "Gnomenu", lower_case_cprefix = "gnomenu_")]
namespace Gnomenu {
	[CCode (cheader_filename = "globalmenu-settings.h")]
	public class GlobalSettings : Gnomenu.Settings {
		public void attach_to_screen (Gdk.Screen? screen);
		public static Gnomenu.GlobalSettings @get (Gdk.Screen screen);
		public Gdk.Screen screen { get; set; }
	}
	[CCode (cheader_filename = "globalmenu-settings.h")]
	public class LocalSettings : Gnomenu.Settings {
		public LocalSettings (Gdk.Window? window = null);
		public override void attach_to_window (Gdk.Window? window = null);
		public override int changed_notify_timeout { get; set; }
		public Gnomenu.GlobalSettings global { get; set; }
		public override bool show_local_menu { get; set; }
		public override bool show_menu_icons { get; set; }
	}
	[CCode (cheader_filename = "globalmenu-settings.h")]
	public class Settings : GLib.Object {
		public GLib.KeyFile keyfile;
		public const string[] KEYS;
		public Settings ();
		public virtual void attach_to_window (Gdk.Window? window);
		public string? get_by_atom (Gdk.Atom atom);
		public void pull ();
		public void push ();
		public void set_by_atom (Gdk.Atom atom, string? value);
		public string to_string ();
		public virtual int changed_notify_timeout { get; set; }
		public virtual bool show_local_menu { get; set; }
		public virtual bool show_menu_icons { get; set; }
		public Gdk.Window window { get; set; }
	}
}
